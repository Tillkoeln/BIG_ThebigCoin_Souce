#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define Thebigcoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "ThebigcoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
