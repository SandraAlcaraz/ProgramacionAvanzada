#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int int main() {
  int pid;
  pid=fork();
  if(pid==0){
    fork();
    if(pid==0){
      fclose(stdin);
      fclose(stdout);
      fclose(stderr);
      umask(0);
      chdir("/tmp");
    //  printf("I am the daemon \n");
      while (1) {

      }
    }
  }

  return 0;
}
