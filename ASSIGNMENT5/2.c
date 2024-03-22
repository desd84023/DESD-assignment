#include<stdio.h>
int accept_num(int mark[]);
int print_num(int marks[]);

int total_num(int marks[]);
int avg_num(int total);
int marks[5]={78,85,90,87,85};
int *ptr=marks;
int total=0,avg=1;

int choice;
int main(void)
{
	do
	{
		printf("--------------------------------\n");
		printf("0. Exit\n");
		printf("1. accept number\n");
		printf("2. print number\n");
		printf("3. total\n ");
		printf("4. Average of numbers\n");
		printf("  enter your choice : ");
		scanf("%d",&choice);
		printf("---------------------------------\n");
		switch(choice)
		{
			case 1:
				accept_num(marks);
				break;
		         case 2:
				print_num(marks);
				break;
			case 3:
				total_num(marks);
				break;
			case 4: 
				avg_num(total);
				break;

		}
	}while(choice !=0);
	return 0;
}
   
int accept_num(int marks[])

{
	printf("Enter marks of 5 subjects: \n");
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("marks[%d] : ", i);
		scanf("%d", ptr+i);			
	}
}

int print_num(int marks[])
{
	printf("Array : ");
	for(int i = 0 ; i < 5 ; i++)
	{
            printf("%d\n",ptr[i]);

	}
}

int total_num(int marks[])
{ 
int total=0;
        for(int i=0;i<5;i++)
	{
	total+=marks[i];
	}
	printf("%d\n",total);
}
int avg_num(int total)
{
int avg=1;
	avg =(total/5);
	
	printf("total=%3.2d\tavg=%3.2d", total,avg);
		printf("\n");
}
