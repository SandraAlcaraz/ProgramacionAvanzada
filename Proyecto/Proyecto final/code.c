#include <stdio.h>
#include <stdlib.h>

int main(){

	int t, n,i,ans
  int a[500];
	scanf("%d",&t);
  answer=0;
for(int i=0; i<t; i++){
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    answer=answer^a[i];
  }

		if(answer==0) printf("First\n");
		else {
			if(n%2==1) printf("Second\n");
			else printf("First\n");
		}

	}
	return 0;
