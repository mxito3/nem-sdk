#include <iostream>
// #include <time.h>
// #include "./common/TimeOperate.h"
// #include "Deadline.h"
// #include "Address.h"
// #include "PlainMessage.h"
// #include "flatbuffers.h"
#include "monster_generated.h"
#include "schema_transfer_transaction_generated.h"
using namespace std;
int main()
{
    //Deadline test

    // tm ltm=Deadline::create(2)->getValue();
    // cout << "年: "<< 1900 + ltm.tm_year << endl;
    // cout << "月: "<< 1 + ltm.tm_mon<< endl;
    // cout << "日: "<< ltm.tm_mday << endl;
    // cout << "时间: "<< ltm.tm_hour << ":";
    // cout << ltm.tm_min << ":";
    // cout << ltm.tm_sec << endl;

    //Address test
    // string rawAddress="SDGMX4R5CAE66J33IWXYKK4XFETB2S46IQ3L7IXS";
    // Address * address=Address::createFromRawAddress(rawAddress);
    // cout<<address->getAddress()<<endl;
    // cout<<address->getNetworkType();

    //PlainMessage test
    // PlainMessage *message=PlainMessage::create("i am yapie");
    // cout<<message->getPlainMessage()<<endl;
    // cout<<message->getType()<<endl;
    // cout<<message->getPayload()<<endl;

    //monster buffer
    using namespace MyGame::Sample;
    flatbuffers::FlatBufferBuilder builder(1024);
    auto weapon_one_name = builder.CreateString("Sword");
    short weapon_one_damage = 3;
    auto weapon_two_name = builder.CreateString("Axe");
    short weapon_two_damage = 5;
    
    // Use the `CreateWeapon` shortcut to create Weapons with all the fields set.
    auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
    auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);

    // Serialize a name for our monster, called "Orc".
    auto name = builder.CreateString("Orc");
    // Create a `vector` representing the inventory of the Orc. Each number
    // could correspond to an item that can be claimed after he is slain.
    unsigned char treasure[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto inventory = builder.CreateVector(treasure, 10);

    // Place the weapons into a `std::vector`, then convert that into a FlatBuffer `vector`.
    std::vector<flatbuffers::Offset<Weapon>> weapons_vector;
    weapons_vector.push_back(sword);
    weapons_vector.push_back(axe);
    auto weapons = builder.CreateVector(weapons_vector);
    Vec3 points[] = {Vec3(1.0f, 2.0f, 3.0f), Vec3(4.0f, 5.0f, 6.0f)};
    auto path = builder.CreateVectorOfStructs(points, 2);
    // Create the position struct
    auto position = Vec3(1.0f, 2.0f, 3.0f);
    // Set his hit points to 300 and his mana to 150.
    int hp = 300;
    int mana = 150;
    // Finally, create the monster using the `CreateMonster` helper function
    // to set all fields.
    auto orc = CreateMonster(builder, &position, mana, hp, name, inventory,
                             Color_Red, weapons, Equipment_Weapon, axe.Union(),
                             path);
    // You can use this code instead of `CreateMonster()`, to create our orc
    // manually.
    // MonsterBuilder monster_builder(builder);
    // monster_builder.add_pos(&position);
    // monster_builder.add_hp(hp);
    // monster_builder.add_name(name);
    // monster_builder.add_inventory(inventory);
    // monster_builder.add_color(Color_Red);
    // monster_builder.add_weapons(weapons);
    // monster_builder.add_equipped_type(Equipment_Weapon);
    // monster_builder.add_equipped(axe.Union());
    // auto orc = monster_builder.Finish();

    // 完成
    builder.Finish(orc);
    uint8_t *buf = builder.GetBufferPointer();
    int size = builder.GetSize(); // 获取buffer大小
    
    // //从buffer获取数据
    auto monster = GetMonster(buf);
    auto hpGet = monster->hp();
    cout<<hpGet<<endl;
    auto manaGet = monster->mana();
    cout<<manaGet<<endl;
    auto nameGet = monster->name()->c_str();
    auto posGet = monster->pos();
    auto x = posGet->x();
    auto y = posGet->y();
    auto z = posGet->z();
    cout<<x <<"  "<< y<< "  "<<z<<endl;
    auto weaponsRead = monster->weapons(); // A pointer to a `flatbuffers::Vector<>`.
    auto weapon_len = weaponsRead->Length();
    auto second_weapon_name = weaponsRead->Get(1)->name()->str();
    auto second_weapon_damage = weaponsRead->Get(1)->damage();
      auto p = builder.GetBufferPointer();
    for (flatbuffers::uoffset_t i = 0; i < builder.GetSize(); i++)
        printf("%d ", p[i]);
}