#include<stdio.h>
int main()
{
	int i,j,n;
	char ch =65;
    char temp=ch;
	printf("enter no. of pattern");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	   ch=temp;
		for(j=n;j>=i;j--)
		{
			printf("%c",ch);
			ch++;
		}
		temp++;
		printf("\n");
	}
	return 0;
}
