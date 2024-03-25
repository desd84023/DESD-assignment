#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t s);

int main(void)
{
	stud_t s1;
	int i;
	accept_student(&s1);
	print_student(s1);

	return 0;
}

void accept_student(stud_t *s)
{       

	int i;
	for(i=1;i<=5;i++)
	{

		printf("Enter student details %d : (rollno, name, marks) : ",i);
		scanf("%d %s %f", &s->rollno, s->name, &s->marks);
	}
}


void print_student(stud_t s)
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%d rollno = %d\nname = %s\nmarks = %f\n",i, s.rollno, s.name, s.marks);
	}}


















