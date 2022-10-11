#include <stdio.h>
#include <stdlib.h>

int main(){
        printf("Function starting...\n");
        printf("(A)\n");
        for(int i = 0; i < 10; i++){
                for(int j = 0; j <= i; j++){
                        printf("*");
                }
                printf("\n");
        }
        printf("(B)\n");
        for(int i = 10; i > 0; i--){
                for(int j = 0; j < i; j++){
                        printf("*");
                }
                printf("\n");
        }
        printf("(C)\n");
        for(int i = 0; i < 10; i++){
                for(int j = 0; j < i; j++){
                        printf(" ");
                }
                for(int a = 10 - i; a > 0; a--){
                        printf("*");
                }
                printf("\n");
        }
        printf("(D)\n");
        for(int i = 0; i < 10; i++){
                for(int a = 10 - i; a > 0; a--){
                        printf(" ");
                }
                for(int j = 0; j < i; j++){
                        printf("*");
                }
                printf("\n");
        }
}
