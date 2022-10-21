#include <stdio.h>
#include <stdlib.h>

int main(){
	int input, output[3];
	scanf("%d", &input);
	output[0] = 0;
	output[1] = 1;
	printf("%d %d", output[0], output[1]);
	for(i = 1; i <= input - 2; i++){
		output[2] = output[1] + output[0];
		printf("%d", output[2]);
		output[0] = output[1];
		output[1] = output[2];
	}
}
