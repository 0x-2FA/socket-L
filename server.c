#include "server.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>

int CreateServerSocket(int domain, int type, int protocol)
{
  int server_sckt = socket(domain, type, protocol);
  return server_sckt;
}

void RemoveSockets(const char *socket_name)
{
  unlink(socket_name);
} 
