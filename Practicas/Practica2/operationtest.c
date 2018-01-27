#include <stdio.h>
#include "operations.h"

void printTestMessage(int condition, char *, char *) ;

int testSubstraction(void);
int testAddtion(void);

int main() {
//test add

printTestMessage(testAddtion(),
                    "add test passed",
                  "add test failed");

  //test substraction
printTestMessage(testSubstraction(),
                    "substraction test passed",
                  "substraction test failed");
    return 0;
}
void printTestMessage(int condition, char *msgPassed, char *msgFailed){
  if(condition){
    printf("%s\n",msgPassed );
  }
  else{
    printf("%s\n",msgFailed );
  }
}

int testSubstraction( ) {
  int x=12;
  int y=1;
  int result2=substraction(x,y);
  int expected2=x-y;
  return result2==expected2;
}
int testAddtion(){
  int a=5;
  int b=-7;
  int result=add(a,b);
  int expected=a+b;
  return result==expected;

}
