#include<stdio.h>
int main()
{
	int i=1,a,table;
	printf("enter number of table\t");
	scanf("%d",&a);
	while(i<=10)
	{
		table=a*i;
	
		printf("%d*%d=%d\n",a,i,table);
		i++;
	}
	return 0;
}
