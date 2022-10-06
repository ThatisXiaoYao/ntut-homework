#include <stdio.h>
#include <stdlib.h>

int main(){
        int a, b, c;
        printf("input three numbers: ");
        scanf("%d%d%d", &a, &b, &c);
        if(a > b){
                if(a > c){
                        printf("%d is the largest\t", a); 
                }
                if(b > c){
                        printf("%d is the smallest", c); 
                        
                }
                else
                        printf("%d is the smallest", b); 
                        
        }
        if(b > c){
                if(b > a){
                        printf("%d is the largest\t", b); 
                }
                if(a > c){
                        printf("%d is the smallest", c); 
                }
                else
                        
                        printf("%d is the smallest", a); 
       }
       if(c > a){
                if(c > b){
                        printf("%d is the largest\t", c); 
                }
                if(a > b){
                        printf("%d is the smallest", b); 
                }
                else
                        printf("%d is the smallest", a);
       } 
}
