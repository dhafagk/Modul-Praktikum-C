#include <stdio.h>
#define n 10
int main(){
	int a[n];
	int i,max,min,sum,avg;
	
	printf("Input %d bilangan:\n\n",n);
	for(i=0;i<n;i++){
		printf("Bil %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=1;i<n;i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	min = a[0];
	for(i=1;i<n;i++){
		if (a[i] < min){
			min = a[i];
		}
	}
	sum = a[0];
	for(i=1;i<n;i++){
		sum = sum + a[i];
		avg = sum/n;
	}
	printf("Nilai terbesar = %4d\n", max);
	printf("Nilai terkecil = %4d\n", min);
	printf("Total bilangan = %4d\n", sum);
	printf("Rata-rata bilangan = %4d", avg);
	return 0;
}
