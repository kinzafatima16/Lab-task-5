#include<stdio.h>
int main()
{
	int pas_age,pas_bal;
	printf("Please enter your age :");
	scanf("%d",&pas_age);
	printf("\nPlease enter your balance :");
	scanf("%d",&pas_bal);
	if(pas_age<21)
	printf("\nNot eligible for ride (underage)");
	else if(pas_bal<200)
	printf("\nNot eligible (insufficient balance)");
	else
	printf("\neligible for ride");
	return 0;
}
