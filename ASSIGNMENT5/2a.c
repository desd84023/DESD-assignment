#include<stdio.h>
void accept_array(short arr[], int length);			
void print_array(short arr[], int length);
int main(void)
{
    int i;
	short arr[6];
	accept_array(arr,6);
	print_array(arr,6);
	return 0;
}

void accept_array(short arr[], int length)
{
	printf("enter array element:\n");
	for(int i=0;i<length;i++)
	{
		printf("arr[%d]:",i);
		scanf("%hd",arr+i);
	}

}

	void print_array(short arr[],int length )
	{
	printf("array:\n");
	for(int i=0;i<length;i++)
		printf("%-4hd",arr[i]);
	printf("\n");
}
