//projecteuler.net/problem=2

#include <stdio.h>

int main() {
	int fibPrv=1, fibCrn=2, fibLmt=4000000 , i, fibMem, fibPos=0;

	for(i=0;fibCrn<fibLmt;i++) {
		if(fibCrn%2==0) {
			fibPos+=fibCrn;
			printf("%d +\n",fibPos);
		}
		fibMem=fibCrn;
		fibCrn+=fibPrv;
		fibPrv=fibMem;
	}
	printf("Sum of all even-valued terms that do not exceed %d is %d\n",fibLmt,fibPos);
	return 0;
}
