#ifndef CLIENT
#define CLIENT

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int CreateClientSocket(int socket);
int ConnectToServer(int socket, struct sockaddr address);

#endif