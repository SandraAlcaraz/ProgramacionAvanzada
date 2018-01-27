#include <assert.h>
#include "operations.h"
#define MAX_INT 2147483647
#define MIN_INT -2147483648

/**
*Use long addiion to catch overflow
*/

int add(int a, int b){
  //Do the addiion and check if there is an overflow
  long c = (long)a + b;
     assert(c >= MIN_INT && c <= MAX_INT);
     return (int)c;
  }



/**
 * Use long substraction to catch overflow.
 */

int substraction(int x, int y){
  //Do the substraction and check if there is an overflow
  long c = (long)x - y;
      assert(c >= MIN_INT && c <= MAX_INT);
      return (int)c;

}
