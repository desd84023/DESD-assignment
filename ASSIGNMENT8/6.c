#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	int std;
	char grade;
	float percentage;
}stud_t;

void accept_student(stud_t *s)
{
	printf("Enter student info : \n");
	printf("Roll no : ");
	scanf("%d", &s->rollno);
	printf("Name : ");
	scanf("%s", s->name);
	printf("Std : ");
	scanf("%d", &s->std);
	if(s->std <= 5)
	{
		printf("Grade : ");
		scanf("%*c %c", &s->grade);
	}
	else
	{
		printf("Percentage : ");
		scanf("%f", &s->percentage);
	}
}

void print_student(stud_t *s)
{
	printf("%-4d %-20s %-4d", s->rollno, s->name, s->std);
	s->std <= 5 ? printf(" %c\n", s->grade) : printf(" %f\n", s->percentage);
}


int main(void)
{
	stud_t s1;
	
	printf("sizeof(s1) = %d\n", sizeof(s1));
	
	accept_student(&s1);
	print_student(&s1);

	return 0;
}




















