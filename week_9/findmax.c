#include <stdio.h>

int main() {
        int input[128] = { 0 };
        fgets(input, 128, stdin);
        int i = 0;
        int a = input[0];
        int c;
        while(c = input[i]){
                if(a < input[i]){
                        a = input[i];
                }
        }
        printf("%d", a);
}
