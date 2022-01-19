#include "server.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>

void RemoveSockets(const char *socket_name)
{
  unlink(socket_name);
} 
