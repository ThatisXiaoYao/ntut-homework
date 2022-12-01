#include <stdio.h>

int main(){
        char input[128] = { 0 };
        fgets(input, 128, stdin);
        int i = 0;
        int c;
        while(c = input[i]){
                i++;
        }
        i--;
        for(; i >= 0; i--){
                printf("%c", input[i]);
        }
}