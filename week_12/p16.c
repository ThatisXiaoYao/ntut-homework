#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void) {
        FILE *fptr;
        char str[MAX], ch;
        int i = 0;
        fptr = fopen("output.txt", "a");
        printf("input string,press enter to end:\n");
        while((ch = getche()) != ENTER && i < MAX){
                str[i++] = ch;
        }
        putc('\n', fptr);
        fwrite(str, sizeof(char), i, fptr);
        fclose(fptr);
        printf("\n data add finish!!\n");
        system("pause");
        return 0;
}