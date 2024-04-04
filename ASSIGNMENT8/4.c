#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stud_t;

void accept_student(stud_t *s);
int search_student(stud_t s,int);

int main(void)
{
	stud_t s1;
	int i,num;
	short ret;
	accept_student(&s1);
	printf("enter theroll number to search\n");
	scanf("%d",&num);
	ret=search_student(s1,num);

	if(ret!=-1)
	{
		printf("rollno is found %d\n",ret);
	}
	else
		printf("roll number not found\n");

	

	return 0;
}

void accept_student(stud_t *s)
{       

	int i;
	for(i=1;i<=2;i++)
	{

		printf("Enter student details %d : (rollno, name, marks) : ",i);
		scanf("%d %s %f", &s->rollno, s->name, &s->marks);
	}
} 

int  search_student(stud_t s,int num)
{       

	if(s.rollno==num)
	return -1;
	else 
	return 0;
}





















