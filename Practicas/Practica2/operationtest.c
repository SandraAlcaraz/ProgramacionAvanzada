#include <stdio.h>
#include "operations.h"

void printTestMenssage(int condition, char *, char *) ;

void testSubstraction(void);
void testAddtion(void);

int main() {
//test add

printTestMenssage(testAddtion(),
                    "add test passed",
                  "add test failed");

  //test substraction
printTestMenssage(testSubstraction,
                    "substraction test passed",
                  "substraction test failed");

    return 0;
}
void testSubstraction(void ) {
  int x=12;
  int y=1;
  int result2=substraction(x,y);
  int expected2=x-y;
  return expected2;
}
void testAddtion(void){
  int a=5;
  int b=-7;
  int result=add(a,b);
  int expected=a+b;
  return expected;

}
