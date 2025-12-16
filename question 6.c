#include<stdio.h>
int main()
{
int distance,rating;
printf("Please enter the driver distance:");
scanf("%d",&distance);
printf("Please enter driver's rating on the scale of 1-5 :");
scanf("%d",&rating);
if(rating>= 4&&distance<=5)
printf("Top driver nearby");
else if (rating>=3&&distance<=10)
printf("Average driver assigned");
else
printf("no suitable driver available");
	return 0;
}
