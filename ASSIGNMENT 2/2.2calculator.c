#include<stdio.h>
int main()
{
	float n1,n2,ans;
	char op;
	printf("enter no1: ");
	scanf("%f",&n1);
	printf("enter operand;\n");
	scanf("%*c%c",&op);
	printf("enter no2; ");
	scanf("%f",&n2);
	switch(op)
	{
		case '+': ans=n1+n2;
				  printf("ans:%.2f\n",ans);
				  break;
		case '-': ans=n1-n2;
				  printf("ans:%.2f\n",ans);
				  break;
		case '*': ans=n1*n2;
				  printf("ans:%.2f\n",ans);
				  break;
		case '/':if(n2!=0)
				 {
					 ans=n1/n2;
					 printf("ans=;%.2f",ans);
				 }
				 else 
					 printf("cannt divideby c\n");
				 break;
		default: printf("invalid operand\n");
				 break;
				 return 0;
	}
}
