#include<stdio.h>
int main()
{
	int i,j,n;
	char ch =65;
	printf("enter no. of pattern");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
