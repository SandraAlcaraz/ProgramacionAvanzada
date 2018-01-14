#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM 11
// Sandra Alcaraz A01631701
// Kata 0 -Programación avanzada

// función merge sort

// hashT
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
  //se busca en la estructura
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

     //get the hash
     int hashIndex = hash(key);

     //move in array until an empty
     while(TablaHash[hashIndex] != NULL) {

        if(TablaHash[hashIndex]->key == key) {
           struct Casilla* temp = TablaHash[hashIndex];

           //assign a dummy item at deleted position
           TablaHash[hashIndex] = dummyItem;
           return temp;
        }

        //go to next cell
        ++hashIndex;

        //wrap around the table
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
     dummyItem = (struct Casilla*) malloc(sizeof(struct Casilla));
     dummyItem->numero = -1;
     dummyItem->key = -1;

     inserta(1, 20);
     inserta(2, 70);
     inserta(42, 80);
     inserta(4, 25);
     inserta(12, 44);
     inserta(14, 32);
     inserta(17, 11);
     inserta(13, 78);
     inserta(37, 97);

     display();
     item = busca(37);

     if(item != NULL) {
        printf("Element found: %d\n", item->numero);
     } else {
        printf("Element not found\n");
     }

     delete(item);
     item = busca(37);

     if(item != NULL) {
        printf("Element found: %d\n", item->numero);
     } else {
        printf("Element not found\n");
     }
  }
