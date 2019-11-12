#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;  
	printf("Program menghitung pythagoras\n");
	printf("===========================\n");
	printf("Masukkan alas (a) : \n");
	scanf("%d",&a);
	printf("Masukkan tinggi (b) : \n");
	scanf("%d",&b);
	//c² = a²  + b²
	c = sqrt((a*a) + (b*b));
	printf("Alas (a) : %2d\t",a);
	printf("Tinggi (b) : %2d\t",b);
	printf("Sisi miring (c) : %2d",c);
	
	return 0;
}
