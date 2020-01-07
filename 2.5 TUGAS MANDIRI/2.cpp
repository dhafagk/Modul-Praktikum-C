#include <stdio.h>
#include <math.h>
int main(){
	// volume bola = 4/3phi r pangkat 3
	float d,r,phi,hasil,pangkat,wadidaw;
	d = 15; r = d/2;
	phi = 3.14;
	pangkat = r * r * r;
	wadidaw = phi * pangkat;
	hasil =  1.3333333 * wadidaw;
	printf("%.0f", hasil);
}
