#include <stdio.h>
#include <math.h>
int main(){
	// a pangkat 2 + b pangkat 2 = c pabgkat 2
	int a,b,ab;
	float c;
	a = 4; b = 5;
	ab = a*a + b*b;
	c = sqrt(ab);
	printf("%.2f", c);
}
