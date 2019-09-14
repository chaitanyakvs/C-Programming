#include<stdio.h>
int main(void)
{
int a=5;
//char ch=a;
//float f= 6.5;
int *pi=&a;
//*pc=&ch;
//*pf = &f;
printf("value of a = Address of a = %p\n",pi);
printf("value of a %d\n", *pi);
printf("value of a %d\n",*(&a));
pi++;
printf("value of a = Address of a = %p\n",pi);
return 0;
}
