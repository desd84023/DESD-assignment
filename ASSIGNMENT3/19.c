#include<stdio.h>
int main()
{
	int i,j,table;
	int a,b;
	printf(" table of you want to print between them \n");
	printf("please enter number1 @ 2\n");
	scanf("%d%d",&a,&b);

	for(i=1;i<=10;i++)
	{
	 for(j=a;j<=b;j++)
	 {
		table=i*j;
	
		printf("%d\t",table);
		
	}
	printf("\n");
	}
	return 0;
}
