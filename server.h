#ifndef SERVER_H
#define SERVER_H

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

int CreateServerSocket(int domain, int type, int protocol);
int NameTheSocket(struct sockaddr_un *server_address, int domain, int server_socketfd);
int Listen(const int *server_socketfd);
void Queue(struct sockaddr_un *client_address, int client_socketfd, int server_socketfd);
void RemoveSockets(const char *socket_name);

#endif