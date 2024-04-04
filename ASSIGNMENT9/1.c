#include<stdio.h>
int main(void)
{

char c;
FILE *fp= fopen("sample.txt","r");
printf("file contents :\n");
while((c = fgetc(fp)) != EOF);
printf("the character which print\t%c\n", c);
fclose(fp);
return 0;
}



