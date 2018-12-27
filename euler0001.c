/*IF WE LIST ALL THE NATURAL NUMBERS BELOW 10 THAT ARE MULTIPLES OF 3 OR 5,
WE GET 3, 5, 6 AND 9. tHE SUM OF THESE MULTIPLES IS 23.
FIND THE SUM OF ALL THE MULTIPLES OF 3 OR 5 BELOW 1000.*/

#include<stdio.h>

int main () {
	int i=0, range=1000, nat3=0, nat5=0;

	for(i=0; i<range; i++) {
		//if divisible by 3 add value to nat3
		if (i%3==0) {
			nat3+=i;
		}
		//if divisible by 5 add value to nat5
		else if(i%5==0) {
			nat5+=i;
		}
	}
	printf("Total should be %d and %d together: %d\n",nat3, nat5, nat3+nat5);
	return 0;
}
