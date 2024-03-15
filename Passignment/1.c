#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n1,n2
	char opr;
	if(argc!=3)
	{
		printf("enter number");
	}
	n1=atoi(argv[1]);
	opr=*argv[2];
	n2=atoi(argv[3]);

	switch(opr)
	{
	case '>' :
	printf("n1 is greter number:%d\n",n1);
	break;
	case '<' :
   	printf("n2 is greater: %d\n",n2);
     break;
	 default :
           printf("invalid operator\n");
		   }
           return 0;
         }
