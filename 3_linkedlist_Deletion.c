#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

void traversal(struct node * ptr){
	while(ptr!=NULL){
		printf("Element id %d\n",ptr->data);
		ptr=ptr->next;
	}
}
//case 1: Deleting the first element from the linked list
struct node * deletefirst(struct node * head){
	struct node * ptr2 = head;
	head = head->next;
	free(ptr2);
	return head;
}

//case 2: Delete at index

struct node * deleteatindex(struct node * head, int index){
	struct node * ptr3 = head;
	struct node * q = head->next;
	for(int i = 0; i < index-1; i++)
	{
		ptr3 = ptr3->next;
		q = q->next;
	}	 
	ptr3->next = q->next;
	free(q);
	return head;
}

//case 3: Delete the last

struct node * deletethelast(struct node *head){
	struct node * ptr4 = head;
	struct node * q2 = head->next;
	while(q2->next != NULL)
	{
		ptr4=ptr4->next;
		q2=q2->next;
	}
	ptr4->next=NULL;
	free(q2);
	return head;
}

//case 4: delete the value
struct node * deletethevalue(struct node * head,int value){
	struct node * ptr5 = head;
	struct node * q4 = head->next;
	while(q4->data!=value && q4->next != NULL)
	{
		ptr5 = ptr5->next;
		q4 = q4->next;
	}
	if(q4->data == value)
	{
		ptr5->next = q4->next;
		free(q4);
	}
	else
		printf("Element not found");
	return head;
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
	
	head->data=4;
	head->next=second;
	second->data=3;
	second->next=third;
	third->data=8;
	third->next=fourth;
	fourth->data=1;
	fourth->next=NULL;
	printf("Linked list before deletion : \n");
	traversal(head);
	//head = deletefirst(head); //for deleting first element of the linked list
	//head = deleteatindex(head,2);
	//head = deletethelast(head);
	head = deletethevalue(head,8);
	printf("Linked list after deletion : \n");
	traversal(head);
	
}