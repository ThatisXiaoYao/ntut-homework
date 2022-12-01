#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t t;
	int i;
	int total[12] = { 0 };
	srand((unsigned) time(&t));
	for(i = 0; i < 36000; i++){
		int a = rand() % 6 + 1;
		int b = rand() % 6 + 1;
		int n = a + b;
		total[n - 1]++;
	}
	for(i = 0; i <= 10; i++){
		printf("%d\t%d\n", i + 2, total[i + 1]);
	}
}
