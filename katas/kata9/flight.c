#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Casilla{
  int numero;
  int key;
};

struct Casilla* TablaHash[NUM];
struct Casilla* dummyItem;
struct Casilla* item;

int hash(int key){
  return key%NUM;
}

struct Casilla *busca(int key){
  int indice= hash(key);

  while(TablaHash[indice]!=NULL){
    if(TablaHash[indice]->key==key){
      return TablaHash[indice];
    }
    indice++;
    indice%=NUM;

  }
  return NULL;
}

void inserta(int key, int numero){
  struct Casilla *item =(struct Casilla*) malloc(sizeof(struct Casilla));
  item->numero=numero;
  item->key=key;
  //función hash
  int indice= hash(key);
  while(TablaHash[indice]!=NULL && TablaHash[indice]->key != -1){

    indice++;
    indice%=NUM;
  }
  TablaHash[indice]=item;
}
  struct Casilla* delete(struct Casilla* item) {
     int key = item->key;


     int hashIndex = hash(key);

     while(TablaHash[hashIndex] != NULL) {

        if(TablaHash[hashIndex]->key == key) {
           struct Casilla* temp = TablaHash[hashIndex];

           TablaHash[hashIndex] = dummyItem;
           return temp;
        }

        ++hashIndex;

        hashIndex %= NUM;
     }

     return NULL;
  }

  void display() {
     int i = 0;

     for(i = 0; i<NUM; i++) {

        if(TablaHash[i] != NULL)
           printf(" (%d,%d)",TablaHash[i]->key,TablaHash[i]->numero);
        else
           printf(" ~~ ");
     }

     printf("\n");
  }

  int main() {
    int size=109;
     int arreglo[] = {12, 7, 1, 3, 8};
     int n = sizeof(arreglo) / sizeof(int);
     int target = 4;


     dummyItem = (struct Casilla*) malloc(sizeof(struct Casilla));
     dummyItem->numero = -1;
     dummyItem->key = -1;

     for(int i=0;i<n;i++){
       inserta(i,arreglo[i]);
     }
int resta;


     for(int i=0;i<n;i++){
       resta=size-arreglo[i];
       int k= busca(resta);

      if(item=!NULL){

          printf(arreglo[i]);
          printf("k\n", );
      }
     }



  }
