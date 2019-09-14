#include<stdio.h>
#define MAX_SIZE 100

int main()

{

char text1[MAX_SIZE], text2[MAX_SIZE];
char *str1 = text1;
char *str2 = text2;

printf("Enter ant string :\n");
scanf("%s", text1);

//copy text 1 to text 2 char by char //

while(*(str2++) = *(str1++));

printf("first string %s\n", text1);
printf("second string %s\n", text2);

return 0;

}
