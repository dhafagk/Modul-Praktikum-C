#include <stdio.h>
int main(){
	int A[10];
	int i;
	for(i=0;i<10;i++){
		printf("Nilai %i: ", (i+1));
		scanf("%i", &A[i]);
	}
	for(i=0;i<10;i++){
		if(A[i] >= 60){
			printf("%4i", A[i]);	
		}
	}
	return 0;
}
