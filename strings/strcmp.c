#include<stdio.h>
#include<string.h>
int main()

{

char str1[10], str2[10];
printf("enter two strings :\n");
scanf("%s%s", str1,str2);
if((strcmp(str1, str2))==0)
	printf("strings are same :\n");
else
	printf("strings are not same :\n");
return 0;

}
