/*#include<stdio.h>

void main()

{

	int i;
	int arr[] = {2, 3, 4};
	for(i = 0; i < 3; i++)
	{

		printf("%d\t", arr[i]);
	}

}

/*#include<stdio.h>

void main()
{
    int i;
    int arr[] = {2, 3, 4};      // Compile time array initialization
    for(i = 0 ; i < 3 ; i++) 
    {
        printf("%d\t",arr[i]);
    }
}*/

#include<stdio.h>

void main()
{
    int arr[4];
    int i, j;
    printf("Enter array element");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);    //Run time array initialization
    }
    for(j = 0; j < 4; j++)
    {
        printf("%d\n", arr[j]);
    }
}
