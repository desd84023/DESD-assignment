#include<stdio.h>
int main()
{
int n1=10,n2=20,n3=40,max;
max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
printf("maximu number are%d\n",max);

return 0;
}
