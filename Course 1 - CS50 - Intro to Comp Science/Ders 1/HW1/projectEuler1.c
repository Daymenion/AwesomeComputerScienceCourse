#include <stdio.h>

void naturalnum(int num);

int main() {
    /*
    write a program that find the sum of all the multiples of 3 or 5 below number (1000).
    */
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	naturalnum(num);
	
	return 0;
}

void naturalnum(int num) {
	int i,sum;
	sum=0;
	for(i=1;i<num;i++){
		if(i%3==0 || i%5==0)
			sum = sum + i;
	}
	printf("%d",sum);
	
	
}