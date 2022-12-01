#include <stdio.h>
#include <stdio.h>

int main(void) {
        int b[] = {10, 20, 30, 40};
        int *bPtr = b;
        int i;
        int offset;
        
        printf("Array b printed wieh:\nArray subscript notation\n");
        for(i = 0; i < 4; i++){
                printf("b[%d] = %d\n", i, b[i]);
        }

        printf("\nPointer/offset notation where\n the pointer is the array name\n");
        for(offset = 0; offset < 4; offset++) {
                printf("*(b + %d) = %d\n", offset, *(b + offset));
        }
        printf("\nPointers subscript notation\n");
        for(i = 0; i < 4; i++) {
                printf("bPtr[%d] = %d\n", i, bPtr[j]);
        }
        
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
        system("pause");
        return 0;
}
