#include <stdio.h>
#include "student.h"
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int int main() {

  char *fileName="student.dat";
  int fd=open(fileName,0_RDWR);
  int id;
  char name[20];
  Student *pAvanzada=(Student*)nmap(
    NULL,
    10*sizeof(Student),
  PROT_READ| PROT_WRITE,
MAP_FILE |MAP_SHARED,
fd,
0);

  close(fd);
for(int i=0;i<4;i++){
  printf("Give me an id\n");
  scanf("%d",&id);
  printf("Student[%d] = %s \n",
  id,pAvanzada[id].firstName);
}

  munmap(pAvanzada,10*sizeof(Student));
  return 0;
}
