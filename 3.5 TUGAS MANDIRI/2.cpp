#include <stdio.h>
int main(){
	float c,f,r;
	int p;
	
	printf("Program menghitung suhu derajat\n");
	printf("===========================\n");
	printf("Masukkan celcius : \n");
	scanf("%f",&c);
	printf("Celcius : %.1f°C\n",c);
	printf("Ingin di konversi ke mana?\n");
	printf("1. Fahrenheit\n");
	printf("2. Reamur\n");
	printf("Pilih : ");
	scanf("%d",&p);
	if (p == 1){
		printf("Celcius ke Fahrenheit\n");
		printf("=====================\n");
		f = (c * 9/5) + 32;
		printf("%.1f°C = %.1f°F",c,f);
	}else if(p == 2){
		printf("Celcius ke reamur\n");
		printf("=====================\n");
		r = c * 0.8;
		printf("%.1f°C = %.1f°Re",c,r);
	}else{
		printf("Input anda salah pantek!");
	}
	return 0;
}
