#ifndef CLIENT
#define CLIENT

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int CreateClientSocket(int domain, int type, int protocol);
int ConnectToServer(int socket, struct sockaddr address);

#endif