#include<stdio.h>
typedef struct student
{
	int rollno[2];
	char name[20];
	float marks;
}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t s);

int main(void)
{
	stud_t s1;
	int i,choice;
	while(1)
	{   printf("------------------------------------\n");
	    printf("1.acceept student record\n");
	    printf("2. print student record\n");
	    printf("3. exit");
	    printf("Enter your choice:");
            
	    scanf("%d",&choice);

            printf("-----------------------------------\n");
	    switch(choice)
	    {
	    case 1:
	       	   accept_student(&s1);
		   break;
            case 2:
	          print_student(s1);
		  break;
            case 3:
	          exit(1);
             default:
	     printf("wrong choice\n");
	     }
	     }


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


















