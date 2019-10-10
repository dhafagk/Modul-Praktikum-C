/*
 * Author: Dhafa Gustiadi Kurniawan
 * Program: Astagfirullah riba
 * Bahasa: C
 * Hapus ini awas aja kau anjing
 */
 #include <stdio.h>
 int main(){
 	int duit,bunga,bulan,i = 1;
 	printf("Selamat datang di Bank Riba!\n");
 	printf("============================\n");
 	printf("Silahkan masukkan nominal yang ingin Anda simpan di bank kami : \n");
 	scanf("%d",&duit);
 	printf("Sampai kapan Anda akan menyimpannya (bulan) : \n");
 	scanf("%d",&bulan);
 	printf("================================================================================");
 	printf("Saldo Anda : %2d\n",duit);
 	printf("Anda menyimpan selama : %2d bulan\n",bulan);
 	printf("Bunga per bulan : 2%%\n");
 	printf("================================================================================");
 	while(i<=bulan){
 		bunga = duit * 2/100;
 		duit = duit + bunga;
 		printf("Bulan ke-%2d : %2d\t\t\t| bunga : %2d\n",i,duit,bunga);
 		i++;
	 }
	 
	 return 0;
 }
