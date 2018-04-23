#include <stdio.h>
#include <stdlib.h>

boolean validation(char *data){
  int contador=0;
  for(int i=0; i<sizeof(data); i++){
    if(contador==0){
      if((code[i]>>5)==0b110){
        contador=1;
      }
     else if((code[i]>>4)==0b1110){
        contador=2;
      }
      else if((code[i]>>3)==0b11110){
        contador=3;
      }
      else if((code[i]>>7)){
        return false
      }
    }
    else{
      if((c[i]>>6)!=0b10){
        return false;
      }
      contador--;
    }
    return contador==0;
  }




}



int main(){
  validation();
  return 0;
}
