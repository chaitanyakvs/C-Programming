#include<stdio.h>

int main()
{

int arr = {1,2,3,4,5};
int *p = arr;
int (*ptr)[5] = &arr;

printf("p = %p, ptr = %p\n", p, ptr);
printf("*p = %d, *ptr = %d\n", *p, *ptr);

printf("sizeof(p) = %lu, size of(*p) = %lu\n",sizeof(p),sizeof(*p));

printf("sizeof(ptr) = %lu, size of(*ptr) = %lu\n",sizeof(ptr),sizeof(*ptr));

return 0;

}                      
