#include<stdio.h>
int rec_power(int, int);
int main(void)
{
	printf("5^3=%d\n",rec_power(5,3));
	return 0;
}
int rec_power(int base, int index)
{
	if(index==1)
		return base;
	return base * rec_power(base, index-1);
}

