#include <stdio.h>
#include <stdlib.h>

int main() {
        for(int length = 0; length < 3; length++){
                for(int breadth = 0; breadth < 12; breadth ++){
                        if(length == 0 || length == 2){
                                printf("+");
                        }
                        else{
                                if(breadth == 0 || breadth == 11){
                                        printf("+");
                                }
                                else{
                                        printf(" ");
                                }
                        }
                }
                printf("\n");
        }
}
