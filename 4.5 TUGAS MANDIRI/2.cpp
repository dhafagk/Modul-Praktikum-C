/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Buat sistem dari flowchart
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	int n;
	printf("Masukkan bilangan : ");
	scanf("%d",&n);
	if(n > 50){
		n = n - 25;
	}else{
		n = n + 10;
	}
	printf("%2d",n);
	
	return 0;
}
