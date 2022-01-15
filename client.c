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

int ConnectToServer(int socktfd, const struct sockaddr *address, int length)
{
  int con = connect(socktfd, address, length);
  return con;
}

int TestConnection(const int *con)
{
  if (*con == -1) 
  {
    printf("Error: Client...\n");
    return -1;
  }
}