#include <stdio.h>
#include <stdlib.h>

void function1(){
        printf("    *");
        printf("\n");
}

void function2(){
        printf("   ***");
        printf("\n");
}

void function3(){
        printf("  *****");
        printf("\n");
}

void function4(){
        printf(" *******");
        printf("\n");
}

void function5(){
        printf("*********");
        printf("\n");
}

int main(void){
        function1();
        function2();
        function3();
        function4();
        function5();
        function4();
        function3();
        function2();
        function1();
        system("pause");
}
