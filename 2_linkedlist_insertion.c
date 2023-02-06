#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

void traversal(struct node * ptr){
	while(ptr!=NULL)
	{
		printf("Element is %d\n",ptr->data);
		ptr=ptr->next;
	}
	
}

struct node * insertatfirst(struct node * head, int data){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->next=head;
	new->data=data;
	return new;
}

struct node * insertatindex(struct node *head, int data, int index){
	struct node *new2= (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	int i = 0;
	
	while(i!=index-1)
	{
		p = p->next;
		i++;
	}
	new2->data=data;
	new2->next = p->next;
	p->next = new2;
	return head;
}

struct node * insertatend(struct node *head, int data){
	struct node * new3 = (struct node *)malloc(sizeof(struct node));
	new3->data=data;
	struct node * p = head;
	while(p->next!=NULL)
	{
		p = p->next;
		
	}
	p->next = new3;
	new3->next=NULL;
	
	return head;
}

struct node * insertafternode(struct node *head, struct node *prevnode, int data){
	struct node * new4 = (struct node *)malloc(sizeof(struct node));
	new4->data = data;
	struct node * p = head;
	new4->next = prevnode->next;
	prevnode->next = new4;
}
int main(){
	struct node * head;
	struct node * second;
	struct node * third;
	struct node * fourth;
	
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	
	head->data = 23;
	head->next = second;
	second->data = 24;
	second->next= third;
	third->data=25;
	third->next=fourth;
	fourth->data=26;
	fourth->next=NULL;
	traversal(head);
	printf("\n");
//	head = insertatfirst(head, 56);
//	head = insertatindex(head,78,2);
//	head = insertatend(head,90);
	head = insertafternode(head,second,89);

	traversal(head);
	return 0; 
}