#include <stdio.h>
#include <stdlib.h>

int main() {
        int number[60] = { 0 };
        for(int i = 0; i < 60; i++){
                number[i] = i;
        }
        for(int i = 1; i <= 5; i++){
                printf("%3d", 5 * i);
        }
        printf("\n");
        int i = 0;
        int flag = 0;
        int amount = sizeof(number) / sizeof(int);
        while(i < amount){
                for(int j = 0; j < 3; j++){
                        for(int k = 0; k < 5; k++){
                                printf("%3d", number[j + 3 * k]);
                                if((j + 3 * k) == amount - 1){
                                        flag = 1;
                                        break;
                                }
                        }
                        if(flag == 1){
                                break;
                        }
                        printf("\n");
                }
                if(flag == 1){
                        break;
                }
        }
        printf("The end");
}
