 #include <stdio.h>
 
int main()
{
    int a,i;
	int table=0;
	printf("enter number which table you want=");
    scanf("%d=",&a);
	for(i=1;i<=10;i++)
	{
	table=a*i;
	printf("%d*%d=%d\n",a,i,table);
	}
    return 0;   
}

