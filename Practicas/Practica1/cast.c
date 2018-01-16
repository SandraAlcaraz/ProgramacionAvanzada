#include <stdio.h>

const int MAX = 2345567872;

int main(){
  int a=4;
  float f = 7.5;
  int j;
  int *p;

  int b=a+(int)f;// con este int el código corre más rápido
  float c= a*f;

//  long int =23455678762;
  long int d= (long)MAX*MAX;



  p=&a;
  *p=7;
  p++;
  *p=8;




  int arreglo[5]={0};
  *(arreglo+1)=20;

  p=arreglo;

for(int i=0;i<5;i++){
  *p=67;
  p++;
}


  printf("a= %d, b=%d, d= %ld \n", a,b, d); // %d lo va a convertir a entero
  // %i también sirve para entero
  // %c imprime como caracter

  //C primero hace las operaciones y después hace el cast

  // %p imprime el valor en hexadecimal viene de pointer, guarda la dirección de una variable
  // las direcciones en C son de 4 bytes
  //


  printf("f = %f, c= %f\n",f,c );

}
