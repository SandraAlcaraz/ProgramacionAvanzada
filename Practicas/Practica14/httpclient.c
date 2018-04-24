#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
int main(int argc, char **argv) {
  char *serverName=argv[1];
  struct hostent *serverIp;
  struct sockaddr_in server;
  char *msg="GET wiki/Main_Page HTTP/1.0\r\n  Host: 10.43.53."
  char buffer[1000];
  int socket;
  serverIp =gethosbyname(serverName);
  memcpy(&server.sin_addr, serverIp->h_addr_list[0], serverIp->length);
  server.sin_port=htons(80);
  server.sin_family=AF_TNET;
  my_socket=socket(AF_TNET,SOCK_STREAM,0);
  if(connect(my_socket,(struct sockaddr *)&server, sizeof(server))==0){
    printf("CONNECTED%s\n" );
    write(my_socket,msg, strlen(msg)*sizeof(char));
    read(my_socket,buffer, sizeof(buffer));
    printf("Data %s\n",buffer );
  }else{
    printf("Error of connection\n" );
  }
  printf("The ip address is: %s\n",serverIp->h_addr_list[0] );
  return 0;
}
