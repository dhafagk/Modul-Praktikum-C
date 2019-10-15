#include <stdio.h>
int main(){
	int a,t,h1,h2,s1,s2,s3,p;
	
	printf("Program menghitung segitiga\n");
	printf("===========================\n");
	printf("Menu : 1. Luas\n\t2. Keliling\n");
	printf("Pilih : ");
	scanf("%d",&p);
	if (p == 1){
		printf("Program menghitung luas segitiga\n\n");
		printf("Masukkan alas (cm) : ");
		scanf("%d", &a);
		printf("Masukkan tinggi (cm) : ");
		scanf("%d", &t);
		
		h1 = a*t/2;
		
		printf("\nLuas segitiga dengan alas %2d cm dan tinggi %2d cm adalah %2d.", a, t, h1);
	}else if(p == 2){
		printf("Program menghitung keliling segitiga\n\n");
		printf("Masukkan a (cm) : ");
		scanf("%d", &s1);
		printf("Masukkan b (cm) : ");
		scanf("%d", &s2);
		printf("Masukkan c (cm) : ");
		scanf("%d", &s3);
		
		h2 = s1+s2+s3;
		printf("\nKeliling segitiga dengan a %2d cm, b %2d, c %2d cm adalah %2d.", s1, s2, s3, h2);
	}else{
		printf("Input anda salah pantek!");
	}
	return 0;
}

