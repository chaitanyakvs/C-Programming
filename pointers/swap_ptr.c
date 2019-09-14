#include<stdio.h>
int main()
{
int num1 = 10, num2 = 20, temp;
int *ptr1 = &num1;
int *ptr2 = &num2;

temp = *ptr2;
*ptr2 = *ptr1;
*ptr1 = temp;

printf("swap values are %d%d:", *ptr1, *ptr2);
return 0;
}
