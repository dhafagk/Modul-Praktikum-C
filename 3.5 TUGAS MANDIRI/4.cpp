#include <stdio.h>
int main(){
	int a;
	printf("Program mengecek angka genap atau ganjil\n");
	printf("========================================\n");
	printf("Masukkan angka : ");
	scanf("%d",&a);
	if((a%2)==0){
		printf("Angka %2d adalah genap!",a);
	}else{
		printf("Angka %2d adalah ganjil!",a);
	}
	
	return 0;
}
