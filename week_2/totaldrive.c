#include <stdio.h>
#include <stdlib.h>

int main()
{
	double totalMiles;
	double gasoline;
	double milespergallon;
	double parkingfee;
	double tolls;
	double total;
	printf("your total miles per day: ");
	scanf("%lf", &totalmiles);
	printf("your cost per gallon of gasoline: ");
	scanf("%lf", &gasoline);
	printf("your average miles per gallon: ");
	scanf("%lf", &milespergallon);
	printf("your parking fee per day: ");
	scanf("%lf", &parkingfee);
	printf("your tolls per day: ");
	scanf("%lf", &tolls);
	total = (totalmiles/milespergallon)*gasoline + parkingfee + tolls;
	printf("Today you cost %lf \n", total);
	system("pause");
	return 0;
}
