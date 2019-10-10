/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Mencetak deret bilangan
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
 #include <stdio.h>
 int main(){
 	int a,b,c,d;
 	printf("a.");
 	for(a=1; a<=19; a=a++){
 		printf("%3i",a);
		 a = a + 2;
	 }
	 printf("\nb.");
	 for(b=10; b<=100; b=b++){
 		printf("%4i",b);
		 b = b + 10;
	 }
	 printf("\nc.");
	 for(c=100; c>=55; c=c--){
 		printf("%3i",c);
		 c = c - 5;
	 }
	 printf("\nd.");
	 for(d=1; d<=1024; d=d++){
 		printf("%5i",d);
		 d = d * 2;
	 }
	 return 0;
 }
