#include <assert.h>
#include "operations.h"
#define MAX_INT 2147483647

/**
*Use long addiion to catch overflow
*/

int add(int a, int b){
  //Do the addiion and check if there is an overflow
  long c=(long)a+b;

  assert(c<=MAX_INT&&c>-MAX_INT);
    return (int)c;
  }

}

int substraction(int x, int y){
  //Do the substraction and check if there is an overflow
  long z=0;
}
