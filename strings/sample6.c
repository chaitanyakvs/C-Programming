// reverse of a string //

#include<stdio.h>
#include<string.h>
int main(void)
{
char arr[100];
printf("Enter the string\n");
scanf("%s\n", arr);
strrev(arr);
printf("Reverse of the string is \n %s \n", arr);
return 0;
}


// string reversal without strrev function //
/*
#include<stdio.h>
#include<string.h>

int main(void)
{

char s[100], r[100];
int begin, end, count = 0;
printf("Input of a string \n");
scanf("%s\n", r);

// calculating string length //

while (s[count] != '0')
count++;
end = count -1;

for(begin =0;begin <count;begin++)
	{
		r[begin] = s[end];
		end--;
	}
r[begin] = '\0';
printf("%s", r);
return 0;
}*/
