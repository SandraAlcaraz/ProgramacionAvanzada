#include <stdio.h>

typedef struct d{

  unsigned day:5;
  unsigned month:4;
  unsigned year;
  unsigned flags:5;
}Date;

#define LEAP_MASK 0b10000
#define PRIME_MASK 0b00100

int main(){
  Date today={23,4,2018};
  printf("size of the date %ld\n", sizeof(today));
  printf("Date %d %d %d \n", today.day, today.month, today.year);
  printf("Check today is 23\n");
  if(today.day^23){
    printf("No\n", );
  }else{
    printf("YES, today is 23!!\n");
  }
  today.flags=0b11010;
  if(((today.flags &(LEAP_MASK|PRIME_MASK))==(LEAP_MASK| PRIME_MASK)){
    printf("YES is leap\n" );
  }
  return 0;
}
