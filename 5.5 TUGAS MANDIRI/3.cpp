/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Menghitung biaya parkir 
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	int jm,jk,lb,biaya,i;
	printf("Program menghitung biaya parkir : \n");
	printf("================================================================\n");
	printf("Masukkan jam masuk (1-12) : \n");
	scanf("%d",&jm);
	printf("Masukkan jam keluar (1-12) : \n");
	scanf("%d",&jk);
	if(jk<=jm){
		jk = jk + 12;
	}
	lb = jk - jm;
	biaya = 2000;
	if(lb > 2){
		i = lb - 2;
		biaya = biaya + (i * 500);
	}
	printf("Lama parkir : %2d jam\n",lb);
	printf("Biaya : %2d rupiah",biaya);
	
	return 0;
}
