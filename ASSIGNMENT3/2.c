#include<stdio.h>
int main()
{
	int i,a,table;
	printf("enter number of table\t");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		table=a*i;

		printf("%d*%d=%d\n",a,i,table);
	}
	return 0;
}
