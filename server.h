#ifndef SERVER_H
#define SERVER_H

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

int CreateServerSocket(int domain, int type, int protocol);
void RemoveSockets(const char *socket_name);
void Listen();


#endif