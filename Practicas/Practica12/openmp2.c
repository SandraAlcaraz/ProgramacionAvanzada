#include <stdio.h>
#include <omp.h>
//export OMP_NUM_THREADS=400

int main(){
  int a[20000];
  int b[20000];
  int c[20000];
  int chunk=100;
  int j;

  for(int i=0;i<SIZE;i++){
    a[i]=i;
    b[i]=2*i;
  }
  #pragma omp parallel private shared(a,b,c,chunk)private[j]
  {
    #pragma omp for schedule(dinamic,chunk) nowait
    for(int j=0;j<SIZE;j++){
      c[j]=a[j]+b[j];
    }
  }
  return 0;
}
