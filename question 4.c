#include<stdio.h>
#include<math.h>
int main ()
{
int distance, typ_ride,req;
float fare,multi;
printf("Please enter the distance in km: \n");
scanf("%d",&distance);
printf("Please enter ride type:\n 1 = Economy \n 2 = Business \n 3 = Luxury\n");
scanf("%d",&typ_ride);
printf("Enter number of ride requests in the area: ");
scanf("%d", &req);
multi=sqrt(req)/2.0;
if (multi>3) 
{
multi=3;
}
switch(typ_ride)
{
case 1:
{
fare=distance*50;
}
break;
case 2:
{
fare=distance*100;
}
	break;
case 3:
{
fare=distance*200;
}
break;
default:
printf("please enter a valid option");
	}
fare=fare*multi;
printf("total fare is %.2f",fare);
return 0;
}
