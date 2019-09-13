/*#include<stdio.h>
#include<string.h>
int main(void)

{

	char str[50];
	printf("enter a string :");
	scanf("%s",str);
//	gets(str);
	printf("Length of string :%u\n",strlen(str));
	return 0;

}*/

#include<stdio.h>
#define MAX_SIZE 100

int main()

{

	char text[MAX_SIZE];
	int i;
	int index = 0;
	printf("Enter any string :");
	scanf("%s",&text);
	while(text[index]!='\0') index++;
	printf("Length of '%s' = %d", text, index);
	return 0;

}


// string length by using pointer //

#include<stdio.h>
#define MAX_SIZE 100

int main()

{

        char text[MAX_SIZE];
        char * str = text;
        int count = 0;
        printf("Enter any string :");
        scanf("%c",&text);
        while(*(str++)) count++;
        printf("Length of '%s' = %d", text, count);
        return 0;

}
	
