#include <stdio.h>
#include <stdlib.h>

int main(){
        int array[] = {10, 9, 8 ,7 ,6, 5, 4, 3, 2, 1};
        for(int j = 0; j < 9; j++){
                for(int i = 0; i < 9 - j; i++){
                        if(array[i] > array[i + 1]){
                                int temp = array[i];
                                array[i] = array[i + 1];
                                array[i + 1] = temp;
                        }
                }
        }
        
        for(int i = 0; i < 10; i++){
                printf(" %d", array[i]);
        }
}
