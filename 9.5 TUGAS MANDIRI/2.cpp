#include <stdio.h>
int main(){
	int a[11];
	int i;
	
	for(i=0;i<11;i++){
		printf("Data ke-%i: ", (i+1));
		scanf("%i", &a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2 == 0){
			printf("%4i", a[i]);	
		}
	}
}
