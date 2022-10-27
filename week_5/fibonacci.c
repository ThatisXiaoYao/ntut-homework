#include <stdio.h>
#include <stdlib.h>

int main(){
	double input, output[3], i;
	printf("function starting...\n");
	scanf("%lf", &input);
	output[0] = 0;
	output[1] = 1;
	printf("%.lf %.lf", output[0], output[1]);
	for(i = 1; i <= input - 2; i++){
		output[2] = output[1] + output[0];
		printf(" %.lf", output[2]);
		output[0] = output[1];
		output[1] = output[2];
	}
}
