//  How to pass strings to functions  //


#include<stdio.h>
void displayString(char str[]);

int main()
{

	char str[50];
	printf("enter string  :");
scanf("%s\n",str);
displaystring(str);
return 0;
}

//void displayString(char str[])
{
	printf("string output :");
	printf("%s\n",str);

return 0;
}


/*
// C program to illustrate how to 
// pass string to functions 
#include<stdio.h> 

void printStr(char str[]) 
{ 
	printf("String is : %s",str); 
} 

int main() 
{ 
	// declare and initialize string 
	char str[] = "GeeksforGeeks"; 
	
	// print string by passing string 
	// to a different function 
	printStr(str); 
	
	return 0; 
} */

