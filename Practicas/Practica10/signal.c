#include <stdio.h>
#include <signal.h>

void receiveSignal(int sig){
  printf("HOLA MUNDO\n" );
  printf("Recibi sennal %d\n", sig);
}


int main(){
  //signal(SIGUSR1,receiveSignal);
  signal(SIGTERM,receiveSignal); //ctrl c
  while (1) {

  }
}
