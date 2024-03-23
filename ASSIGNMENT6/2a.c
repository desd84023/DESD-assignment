#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20] = "desd";
	char str2[] = "desd";
	char *str4 = "desd";


	printf("sizeof(str1) = %u, strlen(str1) = %d\n", sizeof(str1), strlen(str1));
	// size = 20, len = 4
	printf("sizeof(str2) = %u, strlen(str2) = %d\n", sizeof(str2), strlen(str2));
	// size = 5, len = 4
	printf("sizeof(str4) = %u, strlen(str4) = %d\n", sizeof(str4), strlen(str4));
	// size = 8, len = 4

	
	return 0;
}




















