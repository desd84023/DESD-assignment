#include<stdio.h>
char accept_array(char mat[3][3]);
char print_array(char mat[3][3]);
int main(void)
{
         int  i,j;
	char  mat[3][3];
	accept_array(mat);
	print_array(mat);
	return 0;
}
char accept_array(char mat[][3])
{   
printf("enter 2d array :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("mat[%d][%d] :",i,j);
			scanf("%s",&mat[i][j]);
		}
		printf("\n");
	}
	
}

char print_array(char mat[][3])
{
  printf("2D array:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%-4s",mat[i][j]);
		}
		printf("\n");
	}
	
}

