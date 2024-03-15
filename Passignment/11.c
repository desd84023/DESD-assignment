#include<stdio.h>
int main()
{
int x,y;
printf("enter x co-ordinate");
scanf("%d",&x);
printf("enter Y co-ordinate");
scanf("%d",&y);
if(x>0&&y>0)
{
printf("1st co-ordinate\n");
}
else if(x<0 && y>0)

printf("2nd co-ordinate\n");
else if(x<0 && y<0)

printf("3rd co-ordinate\n");
else if(x>0 && y<0)
printf("4th co-ordinate\n");

else if(x==0 && y>0)
printf("+x axis\n");

else if(x==0 && y<0)
printf("-x axis\n");
else if(x>0 && y==0)
printf("+y axis\n");
else if(x<0 && y==0)
printf("-Y axis\n");
else if(x==0 && y==0)
printf("at origin\n");
return 0;
}
