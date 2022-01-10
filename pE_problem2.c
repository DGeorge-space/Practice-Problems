#include "pE_problem2.h"

// Make the head and the current nodes
struct node *head = NULL;
struct node *curr = NULL;




struct node* create_list(int val)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	if(NULL == ptr)
	{
		printf("Node creation failed \n");

		return NULL;
	}

	ptr->val = val;
	ptr->next = NULL; 

	head = curr = ptr; 

	return ptr; 

}

struct node* add_to_list(int val, int add_to_end)
{
	if(NULL == head)
	{
		return (create_list(val));
	}

	struct node *ptr = (struct node*)malloc(sizeof(struct node));

	if(NULL==ptr)
	{
		printf("Node creation failed \n");
		return NULL;
	}
	ptr->val = val;
	ptr->next = NULL; 

	if(add_to_end)
	{
		curr->next = ptr;
		curr = ptr;
	}

	else
	{	
		ptr->next = head;
		head = ptr;

	}

	printf("Created Linked List");
	return ptr;

}

void print_list()
{
	struct node *ptr = head; 

	printf("Printing Linked List: \n");

	while(ptr!=NULL)
	{
		printf("\n [%d] \n", ptr->val);
		ptr = ptr ->next;
	}

	printf("Finished printing \n");

  
}

