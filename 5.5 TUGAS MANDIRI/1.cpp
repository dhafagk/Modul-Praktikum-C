/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Menghitung lama bekerja / selisih
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	int jm,jk,lb;
	printf("Program menghitung berapa lama kita bekerja tapi tidak digaji : \n");
	printf("================================================================\n");
	printf("Masukkan jam masuk (1-12) : \n");
	scanf("%d",&jm);
	printf("Masukkan jam keluar (1-12) : \n");
	scanf("%d",&jk);
	//Jika jam keluar kurang atau sama dengan jam masuk maka +12
	if(jk<=jm){
		jk = jk + 12;
	}
	lb = jk - jm;
	printf("Lama bekerja : %2d jam",lb);
	
	return 0;
}
