#include <stdio.h>
#include <stdlib.h>

int main(){
        double hours, rate;
        printf("Function starting....\n");
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
        while(hours != -1){
                printf("Enter hourly rate of the worker ($00.00): ");
                scanf("%lf", &rate);
                printf("Salary is $%.2lf\n\n", hours * rate);        
                printf("Enter # of hours worked (-1 to end): ");
                scanf("%lf", &hours);
        }

}
