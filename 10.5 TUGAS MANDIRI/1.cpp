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
	for(i=0;i<11;i=i+2){
			printf("%4i", a[i]);
	}
	printf("\nB. ");
	for(i=0;i<11;i++){
			if(a[i]>9 == 0){
				continue;
			}
			printf("%4i", a[i]);
	}
	printf("\nC. ");
	for(i=0;i<14;i++){
			if(a[i]>9 == 0){
				continue;
			}
			printf("%4i", a[i]);
	}
	printf("\nD. ");
	for(i=0;i<14;i++){
			if(a[i]%2 == 0){
				continue;
			}
			printf("%4i", a[i]);
	}
	printf("\nE. ");
	for(i=0;i<11;i++){
			if(a[i]%2 == 0){
				continue;
			}
			printf("%4i", a[i]);
	}
}
