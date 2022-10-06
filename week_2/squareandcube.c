#include <stdio.h>

int main(){
        printf("number  square  cube\n");
        for(int i = 0; i <= 10; i++){
                int num = i;
                int square = i * i;
                int cube = i * i * i;
                if(square > 9 && square < 100){
                       printf("%d\t%d      %d\n", num, square, cube); 
                       if(square > 99){
                               printf("%d       %d      %d", num, square, cube);
                       }
                }
                else{
                        printf("%d\t%d\t%d\n", num, square, cube);
                }
        }
}
