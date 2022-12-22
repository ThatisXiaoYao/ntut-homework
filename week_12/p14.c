#include <stdio.h>
#include <stdlib.h>

int main(void) {
        FILE *fptr;
        char ch;
        int count = 0;

        fptr = fopen("welcome.txt","r");
        if(fptr != NULL){
                while((ch = getc(fptr) != EOF){
                        printf("%c", ch);
                        count++;
                }
                fclose(fptr);
                printf("\ntotal %d bit\n", count);
        }
        else{
                printf("file opens fail!!\n");
        }
        system("pause");
        return 0;
}
