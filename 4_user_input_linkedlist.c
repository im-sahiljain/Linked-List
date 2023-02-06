#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
};

struct node * createlinkedlist(int n){
	
	struct node * head = NULL;
	struct node * temp = NULL;
	struct node * p = NULL;
	
	for(int i=0;i<n;i++)
	{
		//let us create individual isolated node 
		temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter data : ");
		scanf("%d",&(temp->data));
		temp->next=NULL;
		
		if(head == NULL)
		{
			head = temp; // if list is empty then make temp as first node
		}
		else
		{
			p=head;
			while(p->next != NULL)
				p = p->next;
			p->next = temp;
		}
	}
	return head;
}

void traversal(struct node * p){
	//struct node * p = head;
	while(p!=NULL)
	{
		printf("Element is %d\n",p->data);
		p=p->next;
	}

}

int main()
{
	int n=0;
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	
	struct node * head = NULL;
	head = createlinkedlist(n);
	traversal(head);
	return 0;
}