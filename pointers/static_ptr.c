#include<stdio.h>

int main()

{

	int num = 1;
	static int i=1;
	int *ptr = &num;
printf("value of num %d :\n", num);
printf("Address of num = %p\n", &num);
for(i=1;i<=5;i++)
{
printf("The values of num %d \n:", i);
}
return 0;
}
