#include "walletManager.h"

Wallet* createWallet(int septims) {
    auto wallet = new Wallet();
    wallet->septims = septims;
    return wallet;
}

void destroyWallet(Wallet* wallet) {
    delete wallet;
}
