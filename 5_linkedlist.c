#include<stdio.h>
#include<stdlib.h>

// Linkedlist is a self referencial data structure
struct node{
	int data;
	struct node * next;
};

struct node * createlinkedlist(int n){
	int i=0;
	struct node * head = NULL;	//head will be used to store address of first node and it will be returned
	struct node * temp = NULL; // temp will be used to create individual/temporary node at placing at appropriate postion
	struct node * p = NULL;	// p is used to iterate the list.
	
	for(i=0;i<n;i++)
	{
		// lets create individual node it will be unattached node. It will be isolated node.
		temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter the data : ");
		scanf("%d",&(temp->data));
		temp->next = NULL;
		
		if(head == NULL) 	//if list is currently empty, then make temp as first node.
		{
			head = temp;
		}
		else
		{
			p = head;
			while(p->next!= NULL)
			{
				p = p->next;
			}
		p->next = temp;
		}
	}
	return head;
}

void traversal(struct node * head){
	struct node * p = head;
	while(p!=NULL)
	{
		printf("Element is : %d\n",p->data);
		p = p->next;
	}
}

int main()
{
	int n=0;
	struct node * head = NULL;
	printf("Enter no of node : ");
	scanf("%d",&n); 
	head = createlinkedlist(n);
	traversal(head);
	return 0;
}