//projecteuler.net/problem=4
#include <stdio.h>

int main()
{
    int num=538835;
    int orignum=num;
    int digit[8];
    int counter=0;
    int multinum=1;
    int b;
    printf("Given input is %d\n", num);
    //deconstruct digits
	while(num>0) {
        digit[counter]=num%10;
        printf("%d\n",digit[counter]);
        num/=10;
        counter++;
    }
	//figure out required multiplication for reconstruct 
    if(counter>0){
        for(b=1;b<counter;b++){
            multinum=multinum*10;
        }
    }

//reconstruct digits to number
    int i=0;
    int reconnum=0;
    while(i<counter) {
		reconnum+=digit[i]*multinum;
		multinum/=10;
		i++;
    }
    printf("Reconstructed to: %d\n",reconnum);

    if(reconnum==orignum) {
        printf("Yes, this is a palindrome");
    }
    else{
		printf("No, this is NOT a palindrome");
    }
    return 0;
}
