#include <stdio.h>
#include <stdlib.h>

int main(){
	double base, exp, Total = 1, i;
	printf("please input nubmer:\n");
	scanf("%lf %lf", &base, &exp);
	Total = base;
	if(exp == 1){
		printf("%lf", base);
	}
	else{
		for(i = 1; i < exp; i++){
			Total = Total * base;	
		}
		printf("%lf", Total);
	}
}
