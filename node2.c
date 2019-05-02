//  Beginning of single linked list  //

#include<stdio.h>
#include<stdlib.h>

/* structure of a node */

struct node {

	int data;		// data
	
	struct node *next;	// Address

}*head;

void createlist(int n);
void insertnodeatbeginning(int data);
void displaylist();


int main()

{

	int n, data;

	/*  create a singly linked list of n nodes  */

	printf("enter the total number of nodes : ");
	scanf("%d", &n);
	createlist(n);

	printf("\n data in the list :\n");
	displaylist();


	/*  Insert data at the beginning at singly linked list  */

	printf("enter data to insert at beginning of the list : ");
	scanf("%d", data);
	insertnodeatbeginning(data);

	printf("\n data in the list \n");
	displaylist();


	return 0;

}


	/* create a list of n nodes */

	void createlist(int n)
{
	struct node *newnode, *temp;
	int data, i;

	head = (struct node *)malloc(sizeof(struct node));

	/* If unable to allocate memory for head node */

	printf("enter the data of node 1 :");
	scanf("%d", &data);

	head->data = data;  // Link data field with data //
	head->next = Null;  // Link address field to NULL //

	temp = head;


	// create n nodes and adds to linked list //
	

	for(i=2; i<=n; i++)
	{
		newnode = (struct node *)malloc(sizeof(stuct node));

		/*  If memory is not allocated for newnode  */

		if(newnode == NULL)
		{
			printf("unable to allocate memory :");
			break;
		}
		
		else
		
		{
			printf("enter the data of node %d", i);
			scanf("%d", &data);

			newnode->data = data;
			newnode->next = next;

			temp->next = newnode;

			temp = temp->next;
		}
	}
	printf("single linked list created successfully\n");
	}
}


/*
 * Create a new node and inserts at the beginning of the linked list.
 */
void insertnodeatbeginning(int data)
{
    struct node *newNode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = data; // Link data part
        newnode->next = head; // Link address part

        head = newnode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


/*
 * Display entire list
 */
void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}
