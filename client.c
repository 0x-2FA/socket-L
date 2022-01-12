#include "client.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int CreateClientSocket(int domain, int type, int protocol)
{
  int sckt = socket(domain, type, protocol);
  return sckt;
}

int ConnectToServer(int socket, struct sockaddr address)
{
  
}


