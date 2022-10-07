#include <stdio.h>
#include <stdlib.h>

int main(){
	int account_ID, beginning_balance, total_charges;
	printf("Enter account number (-1 to end): ");	
	scanf("%d", &account_ID);
	printf("%d\n", account_ID);	
	printf("Enter your beginning balance: ");	
	scanf("%d\n", &beginning_balance);
	printf("%d\n\n", beginning_balance);
	printf("Enter total charges: ");	
	scanf("%d", &total_charges);
	printf("%d\n", total_charges);
}
