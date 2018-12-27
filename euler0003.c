//projecteuler.net/problem=3

#include <stdio.h>
#include <math.h>

int main() {
	double i, num=600851475143;
	for(i=2;i<=num;i++) {
//		if(num%i==0) {
			printf("%d",i);
			num=num/i;
			printf("---->%d\n",num);
			i=2;
		}
	}
	return 0;
}
