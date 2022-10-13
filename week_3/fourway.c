#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int code, amount;
float hours, salary, fixed_pay, sale;

int main() {
    printf("Enter the pay code: ");
    scanf("%d", &code);
    if(code > 0 && code <<5){
        switch(code){
            case 1:
                printf("\nEnter the fixed pay: ");
                scanf("%f", &fixed_pay);
                salary = fixed_pay;
                printf("manager");
                break;
            
            case 2:
                printf("\nEnter the fixed hourly pay & work hours (use space to split): ");
                scanf("%f%f", &fixed_pay, &hours);
                if(hours > 40)
                    salary = 40 * fixed_pay + (hours-40) * fixed_pay * 1.5;
                else
                    salary = hours * fixed_pay;
                printf("houly worker");
                break;
            
            case 3:
                printf("Enter gross weekly sale: ");
                scanf("%f", &sale);
                salary = 250 + sale * 0.057;
                printf("\ncommision worker");
                break;

            case 4:
                printf("Enter item price & amount(use space to split): ");
                scanf("%f%d", &fixed_pay, &amount);
                salary = fixed_pay * amount;
                printf("piceworker");
                break;
        }
        printf("'s salary is %.0f.\n", salary);
    }
}
