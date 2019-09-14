#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int i, num;
float *data;
printf("Enter the total no of elements :");
scanf("%d", &num);

data = (float*)calloc(num, sizeof(float));
if(data == NULL)
{
	printf("memory not allocated :");
	exit(0);
}
printf("\n");
for(i = 0; i<num; i++)
{
printf("enter number %d: ", i + 1);
scanf("%f", data + i );
}
for(i = 1; i < num; ++i){
if(*data < *(data+i))
	*data = *(data+i);
}

printf("Largest element = %f", *data);
free(data);
return 0;

}
