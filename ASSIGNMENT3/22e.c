#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("enter no. of pattern");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%3d",j);
			
			
		}
		
		printf("\n");
	}
	return 0;
}
