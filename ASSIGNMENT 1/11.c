#include<stdio.h>
#include<limits.h>
int main()
{
printf("--------------------------------------------------------------------------------------\n");
printf("Data type     Size    FS              range                                           \n");
printf("--------------------------------------------------------------------------------------\n");
printf("char           %u     %%c           %cto%c                 \n",sizeof(char),SCHAR_MIN,127);
printf("unsigned char  %u     %%c           %cto%c                 \n",sizeof(unsigned char),0,255);
printf("short int      %u     %%hd          %hdto%hd      \n",sizeof(short int),(SHRT_MAX-1),32767);
printf("unsigned s int %u     %%hu          %huto%hu   \n",sizeof(unsigned short int),0,0xFFFFFFFF);
printf("int            %u     %%d           %dto%d         \n",sizeof(int),(-INT_MAX-1),2147483647);
printf("unsigned int   %u     %%u           %uto%u           \n",sizeof(unsigned int),0,0xFFFFFFFF);
printf("long int       %u     %%ld          %ldto%ld  \n",sizeof(long int),(-INT_MAX-1),2147483647);
printf("unsigned l int %u     %%lu          %luto%lu    \n",sizeof(unsigned long int),(-LONG_MAX-1),0xFFFFFFFFUL);

printf("--------------------------------------------------------------------------------------\n");

return 0;
}
