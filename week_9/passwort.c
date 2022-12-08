#include <stdio.h>
#include <stdlib.h>

int main() {
        char passwort[] = {"that is test"};
        char input[128] = { 0 };
        printf("this is a test passwort check\n");
        printf("please input your passwort: \n");
        fgets(input, 128, stdin);
        int c;
        int i = 0;
        while(c = input[ i ]) {
                i++;
        }
        i--;
        //printf("%d", i);
        for(int j = 0; j < i; j++){
                if(passwort[ j ] != input[ j ] || i <= 12){
                        printf("your input passwort is error");
                        break;
                }
                if(j == (i - 1)){
                        printf("passwort correct");
                        break;
                }
        }
        /*system("pause");
        return 0;*/
}
