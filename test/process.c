#include <stdio.h>
#include <stdlib.h>

int main() {
        int number[19] = { 0 };
        for(int i = 0; i < 19; i++){
                number[i] = i;
        }
        for(int i = 1; i <= 7; i++){
                printf("%3d", 5 * i);
        }
        printf("\n");
        int i = 0;
        int flag = 0;
        int amount = sizeof(number) / sizeof(int);
        for(int j = 0; j < 3; j++){
                for(int k = 0; k < 7; k++){
                        if((j + 3 * k) < amount){
                                printf("%3d", number[j + 3 * k]);
                        }
                        else{
                                break;
                        }
                }
                printf("\n");
        }
        printf("The end");
}
