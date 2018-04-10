#include <stdio.h>
#include <unistd.h>

int main(){
  int pid;
  pid=fork();

  if(pid==0){
    exec("/Aplications/Calculator.app/Contents/MacOs/Calculator","Calculator",(char *)0);
    printf("Soy el proceso hijo\n" );
  } else{
    printf("Soy el proceso padre \n" );
  }

  return 0;
}
