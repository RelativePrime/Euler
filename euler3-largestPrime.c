#include <stdio.h>
#include <math.h>

int main () {

long double number = 600851475143;
//long double number = 2144892019;
//long double number = 13195 // 5, 7, 13 and 29 are prime factors

long double limit = sqrt(600851475143);
printf("Sqrt of n = %.6Lf\n",number);
long double i,r,p,highestPrime;
int prime;

for (i=2;i<=limit;i++)
	{
	r = (int)fmodl(number,i);
	if (r == 0) {
		printf("Factors: %.0Lf \n",i);
		prime = 1;  
		for (p=2;p<i;p++){
			// prime = 1;
			r = (int)fmodl(i,p);
			if (r == 0)
					{ 
					prime = 0;
					printf("Is divisable by %.0Lf\n",p);
					break;
					}			 
				}
		if (prime) {
			printf("//**Prime**//\n");
			highestPrime = i;
			}
		}	

	}

		printf("Highest prime found: %.0Lf \n",highestPrime);
}
