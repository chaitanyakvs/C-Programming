#include<stdio.h>
int main(void)
{
char str[]="India";
int i;
for(i=0;str[i]!='\0';i++)
{
	printf("character = %c\t", str[i]);
	printf("Address = %p\t", &str[i]);
}
return 0;
}
