#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
	int empid;
	char name[20];
	char address[20];
	double salary;
}emp_t;

void accept_emp(emp_t *e);
void print_emp(emp_t *e);

int main(void)
{
	emp_t *ptr = (emp_t *)malloc(sizeof(emp_t));

	accept_emp(ptr);
	print_emp(ptr);

	free(ptr);
	return 0;
}

void accept_emp(emp_t *e)
{
	printf("Enter Employee details (empid, name, address, salary) : ");
	scanf("%d %s %s %lf", &e->empid, e->name, e->address, &e->salary);
}

void print_emp(emp_t *e)
{
	printf("EMPID=%-4dNAME= %-20sADDRESS= %-20sSALARY= %.2lf\n", e->empid, e->name, e->address, e->salary);
}




















