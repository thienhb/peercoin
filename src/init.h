// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
<<<<<<< HEAD
bool AppInit2(boost::thread_group& threadGroup);
std::string HelpMessage();
=======
bool AppInit2(boost::thread_group& threadGroup, bool fForceServer);

/* The help message mode determines what help message to show */
enum HelpMessageMode
{
    HMM_BITCOIND,
    HMM_BITCOIN_QT
};

std::string HelpMessage(HelpMessageMode mode);
>>>>>>> 0b47fe6... bitcoin-cli: remove unneeded dependencies (only code movement)

#endif
