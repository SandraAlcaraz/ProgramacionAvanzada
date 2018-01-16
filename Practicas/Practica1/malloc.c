#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int doFullName(char *firstName, char *lastName, char **fullName){
  int sizeFirstName=strlen(firstName);
  int sizeLastName = strlen(lastName);


  *fullName=(char *) malloc(sizeof(char)*(sizeFirstName+sizeLastName +1));
strcpy(*fullName,firstName);
  strcpy(*fullName+sizeFirstName," ");
  strcpy(*fullName+sizeFirstName+1,lastName);
  return 0;

}

int main(){

  char firstName[]= "Sandra"; //crea arreglo y puedo modificarlo
  char *lastName="Alcaraz"; //constante

  char *fullName;
  doFullName(firstName,lastName, &fullName);

  printf("FullName= %s \n", fullName );
  free(fullName);

  return 0 ;
}
