#include "server.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int CreateServerSocket(int domain, int type, int protocol)
{
  int server_sckt = socket(domain, type, protocol);
  return server_sckt;
}

int NameTheSocket(struct sockaddr_un *server_address, int domain, int server_socketfd)
{
  server_address->sun_family = domain;
  int length = sizeof(*server_address);
  return bind(server_socketfd, (const struct sockaddr *)server_address, length);
}

int Listen(const int *server_socketfd)
{
  return listen(*server_socketfd, 5);
}

void RemoveSockets(const char *socket_name)
{
  unlink(socket_name);
}

void Queue(struct sockaddr_un *client_address, int client_socketfd, int server_socketfd)
{
  while (true)
  {
    int num;
    printf("Server is waiting...\n");

    unsigned int client_len = sizeof(*client_address);
    client_socketfd = accept(server_socketfd, (struct sockaddr *)client_address, &client_len);

    read(client_socketfd, &num, sizeof(num));
    num++;

    write(client_socketfd, &num, sizeof(num));
    close(client_socketfd);
  }
}
