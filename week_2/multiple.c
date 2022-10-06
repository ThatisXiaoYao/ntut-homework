#include <stdio.h>

int main(){
        int num1, num2;
        scanf("%d%d", &num1, &num2);
        if(num1 % num2 == 0){
                printf("the first is a multiple of the second");
        }
        else
                printf("the first is not a multiple of the second");
}
