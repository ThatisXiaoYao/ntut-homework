#include <stdio.h>
#include <stdlib.h>

int main(){
        double investment = 5000, i = 0;
        printf("Function starting...\n");
        for(; i < 15; i++){
                investment = investment + (investment * (0.1 + 0.005 * i));
        }
        printf("%.lf", investment);
        system("pause");
}
