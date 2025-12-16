#include<stdio.h>
int main()
{
	int typ_ride,dis_typ,base;
	printf("Please enter ride type:\n 1 = Economy \n 2 = Business \n 3 = Luxury\n");
	scanf("%d",&typ_ride);
	printf("Please enter type of distance \n 1 = short \n 2 = long \n");
	scanf("%d",&dis_typ);
	switch(typ_ride)
	{
		case 1:
			{
switch(dis_typ){
case 1:
base=100;
break;
case 2:
base=300;
break;
default:
	printf("please enter a valid option");
}
}
break;
case 2:
	{
switch(dis_typ){
case 1:
base=100;
break;
case 2:
base=300;
break;
default:
	printf("please enter a valid option");
	}
}
	break;
case 3:
{
switch(dis_typ){
case 1:
base=100;
break;
case 2:
base=300;
break;
default:
	printf("please enter a valid option");
		}
}
break;
default:
printf("please enter a valid option");
	}
	printf("fare is %d",base);
	return 0;
}
