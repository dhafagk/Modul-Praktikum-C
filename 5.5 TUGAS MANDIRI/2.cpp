/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Switch Case
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	char jenis;
	int kode,harga,potongan;
	int diskon = 0;
	
	printf("Masukkan kode : ");
	scanf("%d",&kode);
	printf("Masukkan jenis (A, B, C) : ");
	scanf("%s",&jenis);
	printf("Masukkan harga : ");
	scanf("%d",&harga);
	
	switch(jenis){
		case 'A' : diskon = 10; break;
		case 'B' : diskon = 15; break;
		case 'C' : diskon = 20; break;
		default : diskon = 0;
	}
	if(diskon != 0){
		potongan = diskon * harga / 100;
		harga = harga - potongan;	
	}
	
	printf("Kode Anda : %2d\n",kode);
	printf("Selamat, Anda mendapatkan potongan harga : %2d%%!\n",diskon);
	printf("Harga setelah didiskon menjadi %2d",harga);
	
	return 0;
}
