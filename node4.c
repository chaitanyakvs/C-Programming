// c - program to insert a newnode at end of a single linked list  //


#include<stdio.h>
#include<stdlib.h>


struct node{

	int data;
	struct node *next;

}*head;

void createlist(int n);
void insertNodeAtEnd(int data);
void displaylist();

int main()

{

	int n, data;


	printf("enter the nodes how many we want :..\n");
	scanf("%d", &n);
	createlist(n);

	printf("\n data enterd in the list \n");
	displaylist();


// Insertion starts here //


printf("enter the data to insert end of a single linked list..:\n");
scanf("%d",&data);
insertNodeAtEnd(data);


printf("\n Data in the list \n");
displaylist();


return 0;



// create list definition  //



void createlist(int n)

{
	
	struct node *newNode, *temp;
	int data, i;

	head = (struct node *)malloc(sizeof(struct node));

	if(head == NULL)
	{

		printf("unable to allocate the memory :\n");

	}
else{

	printf("enter the data in node 1:\n");
	scanf("%d", &data);


	head->data = data;
	head->next = NULL;

	temp = head;


// creation of n nodes to the linked list //


for(i = 2; i<=n; i++)

{

	newNode = (struct node *)malloc(sizeof(struct node));

	if(newNode == NULL)

	{

		printf("unable to allocate the memory..:\n");

	}

	else{

		printf("enter the data in node %d", i);
		scanf("%d", &data);

	newNode->data = data;
	newNode->next = NULL;
	
	temp->next = newNode;

	temp = temp->next;
	}
}
	printf("SINGULAR LINKED LIST IS CREATED..:\n");

void insertNodeAtEnd(int data)	
{

	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));

	if(newNode == NULL)
	{
		printf("unable to allocate memmory..:\n");
	}
	else{

		newNode->data = data;
		newNode->next = NULL;
	
		temp = newNode;
	printf("DATA INSERTED SUCCESSFULLY..:\n");
	}
}

//  display //

void displaylist()

{
	struct node *temp;

	if(head == NULL)
	{
		printf("list is empty:\n");
	}
	else{
		temp = head;
		while(temp!=NULL)
		{
			printf("data=%d\n", temp->data);

			temp = temp->next;
		}
	}
}

