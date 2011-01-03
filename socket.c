#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <socket.h>
#include <types.h>
#include <netinet/in.h>
#include <unistd.h>//for close() for socket

int main(int argc, char *argv[])
{
  int sock;
  struct sockaddr_in sa;
  int bytes_sent, buffer_length;
  char buffer[200];
  
  sprintf(buffer, "Hello World!");
  buffer_length = strlen(buffer) + 1;
  
  sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_IP);
  if(-1 == sock)//if socket failed to initialize, exit
  {
     printf("Error Creating Socket");
     return 0;
  }
  
  sa.sin_family = AF_INET;
  sa.sin_addr.s_addr = htonl(0x7F000001);
  sa.sin_port = htons(7654);
  
  bytes_sent = sendto(sock, buffer, buffer_length, 0,(struct sockaddr*) &sa, sizeof(struct sockaddr_in) );
  if(bytes_sent < 0)
    printf("Error sending packet: %s\n", strerror(errno) );
  
  close(sock);//close the socket
  return 0;
}
