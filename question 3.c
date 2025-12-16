#include <stdio.h>
#include <math.h>
int main()
 {
int req;
float multi;
printf("Enter number of ride requests in the area: ");
scanf("%d", &req);
multi=sqrt(req)/2.0;
if (multi>3) 
{
multi=3;
}
printf("final surge multiplier:%.2f\n", multi);

return 0;
}

