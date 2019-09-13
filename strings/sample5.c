// strlen() //

#include<stdio.h>
#include<string.h>
int main(void)
{

	char str[50];
	printf("Enter a string :");
	scanf("%s", str);
	printf("Length of a string is : %u\n", strlen(str));
	return 0;

}

