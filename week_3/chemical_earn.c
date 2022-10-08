#include <stdio.h>
#include <stdlib.h>

int main(){
        double sales;
        printf("Function starting...\n");
        printf("Enter sales in dollar(-1 to end): ");
        scanf("%lf", &sales);
        while(sales != -1){
                printf("Salary is: %.2lf\n", 200 + (sales * 0.09));
                printf("Enter sales in dollar(-1 to end): ");
                scanf("%lf", &sales);
        }

}
