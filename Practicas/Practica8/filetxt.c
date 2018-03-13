#include <stdio.h>
#include <strings.h>

#define printDebug(...) do{\
  char *isDebug;\
  isDebug= getenv("DEBUG");\
  if(isDebug!=NULL&&strcasecmp(isDebug, "y"));{\
    fprintf(stderr, __VA_ARGS);\
  }\
}while (0)

int main(){
  char *fileName="output.txt";
  FILE *output;
  int character;
  output=fopen(fileName,"a");
  printDebug("output=%p\n", output);
  while(1){
    caracter= fgetc(stdin);
    if(feof(stdin)){
      break;
    }
    fputc(character,output);
  };

  fclose(output);
  return 0;
}
