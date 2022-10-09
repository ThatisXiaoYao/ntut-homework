#include <stdio.h>
#include <stdlib.h>

int main(){
        double principal, interest_rate, term;
        printf("Function starting...\n");
        printf("Enter laon principal (-1 to end): ");
        scanf("%lf", &principal);
        while(principal != -1){
                printf("Enter interest rate: ");
                scanf("%lf", &interest_rate);
                printf("Enter term of the loan in days: ");
                scanf("%lf", &term);
                printf("The interest charge is $%.2lf\n\n", principal * interest_rate * term / 365);
                printf("Enter laon principal (-1 to end): ");
                scanf("%lf", &principal);
        }
}   
