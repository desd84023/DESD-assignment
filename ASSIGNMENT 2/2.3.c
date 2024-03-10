#include<stdio.h>
int main()
{
int empid,deptno;
char dc;
printf("enter the employee id: ");
scanf("%d",&empid);
printf("enter dept no. :");
scanf("%d",&deptno);
printf("enter desig. code:");
scanf("%c",&dc);

switch(deptno)
  {
  case 10 :printf("employee with employee id :%d is working in a marketing department ",empid);
  break;
  case 20 :printf("employee with employee id :%d is working in a mangement department ",empid);
  break;
  case 30 :printf("employee with employee id :%d is working in a sales department as ",empid);
  break;
  case 40 :printf("employee with employee id :%d is working in a designing department  ",empid);
 
  break;
  }

    switch(dc)
	{
	case 'M' : printf("as a manager\n");
	 break;
	 case 'S' : printf("supervisor\n");
	 break;
	 case 's' : printf("sales\n");
	 break;
	 case 'C' : printf("clerk\n");
	 break;
	 }
return 0;
}


  
