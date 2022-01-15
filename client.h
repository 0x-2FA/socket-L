#ifndef CLIENT
#define CLIENT

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

int CreateClientSocket(int domain, int type, int protocol);
int ConnectToServer(int socktfd, const struct sockaddr *address, int length);
int TestConnection(const int *con);

void CloseConnection(const int *socktfd);

#endif