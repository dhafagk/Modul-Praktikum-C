#include <stdio.h>
#define n 15
int main(){
	int a[n];
	int i,x;
	
	for(i=0;i<15;i++){
		printf("Data ke-%i: ", (i+1));
		scanf("%i", &a[i]);
		if(a[i]==999){
			break;
		}
	}
	printf("A. ");
	for(i=0;i<11;i++){
			printf("%4i", a[i]);
	}
	printf("\nB. ");
	for(i=10;i>=0;i--){
			printf("%4i", a[i]);
	}
}
