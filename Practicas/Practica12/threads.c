#include <stdio.h>
#include <pthread.h>

void *helloThread(void *arg){
  long *id=(long)arg;
  printf("HelloWorld %d\n",*id );
  return NULL;
}

int int main() {

  pthread_t threads[MAX_THREADS];
  for(int i=0;i<MAX_THREADS;i++){
    pthread_create(
      &threads[i],
      NULL,
      helloThread,
      (void *)i);
    )
  }

  for(int i=0;i<MAX_THREADS;i++){
    pthread_join(
      threads[i],
      NULL
    );
  }
  return 0;
}
