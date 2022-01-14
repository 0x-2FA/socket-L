#ifndef CLIENT
#define CLIENT

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

int CreateClientSocket(int domain, int type, int protocol);
int ConnectToServer(int socktfd, const struct sockaddr *address, int length);

#endif