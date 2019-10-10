#include <stdio.h>
int main(){
	int n;
	printf("Masukkan bilangan : ");
	scanf("%d",&n);
	if(n > 50){
		n = n - 25;
		n = n + 10;
	}else{
		n = n + 10;
	}
	printf("%2d",n);
	
	return 0;
}
