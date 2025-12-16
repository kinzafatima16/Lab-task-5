#include <stdio.h>
#include <math.h>
int main()
{
int pas_age,pas_bal,typ_ride,dis,points,req,distance,rating;
float multi,fare;
printf("Please enter your age :");
scanf("%d",&pas_age);
printf("\nPlease enter your balance :");
scanf("%d",&pas_bal);
printf("\nPlease enter ride type:\n 1 = Economy \n 2 = Business \n 3 = Luxury\n");
scanf("%d",&typ_ride);
printf("\nPlease enter the distance you want to travel ");
scanf("%d",&dis);
printf("\nPlease enter the number of points you own :");
scanf("%d",&points);
printf("\nEnter number of ride requests in the area: ");
scanf("%d", &req);
printf("\nPlease enter the driver distance:");
scanf("%d",&distance);	
printf("\nPlease enter driver's rating on the scale of 1-5 :");
scanf("%d",&rating);
if(pas_age<21)
	printf("\nNot eligible for ride (underage)");
	else if(pas_bal<200)
	printf("\nNot eligible (insufficient balance)");
	else
	{
	switch(typ_ride)
{
case 1:
{
fare=dis*50;
}
break;
case 2:
{
fare=dis*100;
}
	break;
case 3:
{
fare=dis*200;
}
break;
default:
printf("please enter a valid option");	
	}
multi=sqrt(req)/2.0;
if (multi>3) 
{
multi=3;
}
fare=fare*multi;
printf("\n\teligibilty status: you are eligible");
if(rating>= 4&&distance<=5)
printf("\n\tDriver status : Top driver nearby");
else if (rating>=3&&distance<=10)
printf("\n\tDriver status :Average driver assigned");
else
printf("\n\tDriver status : no suitable driver available");
(points>1000)?fare=fare*0.80:fare=fare*0.95; 
printf("\n\tFinal Fare :%.2f",fare);
}
return 0;
}

