package io.nem.sdk.model.transaction;



import io.nem.sdk.infrastructure.Listener;
import io.nem.sdk.infrastructure.TransactionHttp;
import io.nem.sdk.model.account.Account;
import io.nem.sdk.model.account.Address;
import io.nem.sdk.model.account.PublicAccount;
import io.nem.sdk.model.blockchain.NetworkType;
import io.nem.sdk.model.mosaic.Mosaic;
import io.nem.sdk.model.mosaic.XEM;
import io.nem.sdk.model.transaction.*;
import org.junit.jupiter.api.Test;

import java.math.BigInteger;
import java.net.MalformedURLException;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ExecutionException;

import static java.time.temporal.ChronoUnit.HOURS;

public class test {

	public test() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) throws MalformedURLException, InterruptedException, ExecutionException {
//		System.out.println("in  ");
        // Replace with recipient address
        final String recipientAddress = "SDGMX4-R5CAE6-6J33IW-XYKK4X-FETB2S-46IQ3L-7IXS";

        final TransferTransaction transferTransaction = TransferTransaction.create(
            Deadline.create(2, HOURS),
            Address.createFromRawAddress(recipientAddress),
            Collections.singletonList(XEM.createRelative(BigInteger.valueOf(6))),
            PlainMessage.create("yapie"),
            NetworkType.MIJIN_TEST
        );
//        System.out.println(transferTransaction);
//        // Replace with private key
        final String privateKey = "30A0B82F728DA9FE56D4846E1D50BE8432AEA7ABA5E71E13CBC55675704CBFB8";

        final Account account = Account.createFromPrivateKey(privateKey, NetworkType.MIJIN_TEST);
//        System.out.println(account.getPublicKey()+"here is address   \n");
        final SignedTransaction signedTransaction = account.sign(transferTransaction);
//        System.out.println(signedTransaction.getPayload()+"\n");
//        System.out.println(signedTransaction.getHash());
//        MyTestUtil.print(signedTransaction);
//        // Announcing the transaction
//
//        
//        final TransactionHttp transactionHttp = new TransactionHttp("http://localhost:3000");
//		transactionHttp.announce(signedTransaction).toFuture().get();
		
    }

	

}