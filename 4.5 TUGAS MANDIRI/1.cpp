/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Mengecek bilangan ganjil atau genap 
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	int num;
	printf("Apakah bilangan ini ganjil atau genap?\n");
	printf("======================================\n");
	printf("Masukkan bilangan : ");
	scanf("%d",&num);
	if((num%2)==0){
		printf("Angka %2d adalah genap!",num);
	}else{
		printf("Angka %2d adalah ganjil!",num);
	}
	
	return 0;
}
