#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num = 0;

  struct sockaddr_un address;

  int socketfd = CreateClientSocket(AF_UNIX, SOCK_STREAM, 0);

  address.sun_family = AF_UNIX;
  strcpy(address.sun_path, "server_socket");

  int con = ConnectToServer(socketfd, (struct sockaddr*) &address, sizeof(address));

  if(TestConnection(&con) == -1) 
  {
    CloseConnection(&socketfd);
    return -1;
  }

  write(socketfd, &num, sizeof(num));
  read(socketfd, &num, sizeof(num));

  printf("From server got: %d\n", num);

  CloseConnection(&socketfd);
  
  return 0;
}