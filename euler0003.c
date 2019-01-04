//projecteuler.net/problem=3

#include <stdio.h>
#include <math.h>

int main() {
	double num=600851475143;
	int i;
	printf("Finding divisible number for %.0f\n\n",num);
	for(i=2;i<=num;i++) {
		if(fmod(num, i)==0) {
			printf("%d",i);
			num=num/i;
			printf("=\t\t%.0f\n",num);
			i=2;
		}
	}
	return 0;
}
