#include<stdio.h>
#include<string.h>

void displayString(char str[]);
int main()
{

char str[50];
printf("Enter string :");
scanf("%s",str);
displayString(str);
return 0;

}

void displayString(char str[])
{
printf("string output %s\n:", str);
}

