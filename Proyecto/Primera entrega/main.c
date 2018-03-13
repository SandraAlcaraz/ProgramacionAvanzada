#include <stdio.h>
#define max 10

int a[11] = { 1, 3, 89, 11, 4, 13, 23 };
int b[10];
int f1[19];
int f2[19];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else {
      return;
   }



   int  acomodaPiedras( b[]){
      int w1=0;
      int n1=0
      int w2=0;
      int n2=0;

      for(int i=0; b[].lenght;++){
        if(w2>w1){
          f1[n1]=b[i];
          n1++;
        }
        else{
          f2[n2]=b[i];
          n2++;
        }
      }
   }

   return w1-w2;
}


int main() {
   int i;

   printf("List before sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

acomodaPiedras(b[]);


}