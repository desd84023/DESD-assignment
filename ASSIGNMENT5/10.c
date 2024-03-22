#include<stdio.h>

void accept_array(short arr[], int length);	
short search_element(short arr[], int length, short key);
int i,length;
int main(void)
{
	short arr[6]={11,66,33,11,22,44};
	short ret, key;
	accept_array(arr,6);

	printf("Enter key to be searched : ");
	scanf("%hd", &key);
	ret = search_element(arr, 6, key);
	if(ret != NULL)
		printf("Key is found at index %d\n", ret);
	else
		printf("Key is not found\n");

}
short search_element(short arr[], int length, short key)
{
	for(int i = 0 ; i < length ; i++)
	{
		if(key == arr[i])
		return i;
	}
	return NULL;
}

void accept_array(short arr[], int length)	
{
	printf("Enter array elements: ");
	for(int i = 0 ; i < length ; i++)
        {
	printf("arr[%d] : ", i);
	scanf("%hd", arr + i);
        }
}


