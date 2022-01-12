#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  struct sockaddr_un address;

  int socketfd = CreateClientSocket(AF_UNIX, SOCK_STREAM, 0);

  address.sun_family = AF_UNIX;
  strcpy(address.sun_path, "server_socket");
  
  return 0;
}