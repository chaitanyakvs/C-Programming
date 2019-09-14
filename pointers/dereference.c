#include<stdio.h>
int main(void)
{

	int a = 10;
	float b = 5.5;
 	int *iptr = &a;
	float *fptr = &b;

printf("value of iptr = Address of a = %p\n", iptr);

printf("value of fptr = Address of b = %p\n", fptr);

printf("Address of iptr = %p\n", &iptr);

printf("Address of fptr = %p\n", &fptr);

printf("value of a = %d %d %d",a, *iptr,*(&a));

printf("value of b = %f %f %f",b, *fptr,*(&b));

return 0;

}
