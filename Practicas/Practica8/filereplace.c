#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


#define printDebug(...) do{\
  char *isDebug;\
  isDebug= getenv("DEBUG");\
  if(isDebug!=NULL&&strcasecmp(isDebug, "y"));{\
    fprintf(stderr, __VA_ARGS);\
  }\
}while (0)

int main(){
  char *fileName="input.txt";
  FILE *input;
  char *search="mundo";
  char *replace="MUNDOMUNDO";
  char word[255];
  int searchPos=0;
  int character= 1;
  input=fopen(fileName,"r");
  whie(1){
    fscanf(input,"%s",word);
    if(feof(input)){
      break;
    }
  }
  if(strcmp(word, search==0)){
    printDebug("Found %s\n" word);
    fseek(input, -1*strlen(search), SEEE_CUR);
    searchPos=ftell(input);
    printDebug("searchPos= %ld\n",searchPos);
    rewind(input);
    while(ftell(input)!=searchPos){
      character=fgetc(input);
      fputc(character,stdout);
    }
  }
  return 0;
}
