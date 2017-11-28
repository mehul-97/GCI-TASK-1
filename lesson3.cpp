
#include <stdio.h>

int simpleInterest(int principal, int time, int rate);

int main(void){
	int firstValue = simpleInterest(20000, 24, 5);
	printf("%i is the amount to be given back\n", firstValue );
}

int simpleInterest(int principal, int time, int rate){
	int total = (principal * time * rate) / 100;
	return total;
}