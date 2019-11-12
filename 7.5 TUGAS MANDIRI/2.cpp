/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Pusing anjing tapi untung jadi
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
#include <stdio.h>
int main(){
	int target = 100,kecepatan = 3,waktu = 10,jarak = 0,i;
	for (i=1; i<=waktu; i++){
		jarak = jarak + kecepatan;
		
		if(i==waktu){
			waktu = waktu+10;
			kecepatan = kecepatan+1;
		}
		
		printf("\n%2d detik = %2d meter",i,jarak);
		
		if(jarak==target){
			break;
		}
	}
	printf("\nWaktu dibutuhkan ialah %2d detik",i);
	return 0;
}
