#include <stdio.h>
#include <math.h>

int main () {

	long double term1=0, term2=1, term3;
	long double total, i;
	int r;

	for (i=0;i<4000000;i++) {
		term3 = term1 + term2;
		term1 = term2;
		term2 = term3;
		// printf("%.0Lf\t",term3);

		r = (int)fmodl(term3,2);
		// printf("R=%i\n",r);
		if (r==0)	
			total =+ term3;
	}	

	printf("\nTotal of even number Fibonacci terms < 4 Million: %.0Lf\n",total);

	int amazingCode() {
	}
}
