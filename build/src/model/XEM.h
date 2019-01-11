#pragma once
#include "NamespaceId.h"
#include "Mosaic.h"
#include "MosaicId.h"

class XEM:public Mosaic
{
  public:
    static int DIVISIBILITY;
    static long INITIALSUPPLY;
    static bool TRANSFERABLE;
    static bool SUPPLYMUTABLE;
    static NamespaceId* NAMESPACEID;
    static MosaicId MOSAICID;
    XEM(long long amount);
};
int XEM::DIVISIBILITY = 6;
long XEM::INITIALSUPPLY = 8999999999;
bool XEM::TRANSFERABLE = true;
bool XEM::SUPPLYMUTABLE = false;
NamespaceId* XEM::NAMESPACEID = new NamespaceId(1); //暂时用1表示("nem")
MosaicId XEM::MOSAICID = MosaicId(1);          //new MosaicId("nem:xem");
