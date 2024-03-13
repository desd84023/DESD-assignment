#include<stdio.h>
int main()
{
	int i,j,n;
	char ch =65;
	printf("enter no. of pattern");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
