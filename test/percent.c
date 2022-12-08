#include <stdio.h>

int main() {
        int input, power, number;
        printf("input base, power and %%number: \n");
        scanf("%d %d %d", &input, &power, &number);
        int a = 1;
        while(power > 0){
                a = a * input % number;
                power--;
        }
        printf("%d", a);
        system("pause");
        return 0;
}
