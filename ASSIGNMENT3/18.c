#include<stdio.h>
int main()
{
	int i=1,j,table;
	printf(" table of 1 to 10\n");
		for(i;i<=10;i++)
	{
	 for(j=1;j<=10;j++)
	 {
		table=i*j;
	
		printf("%d\t",table);
		
	}
	printf("\n");
	}
	return 0;
}
