#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node * next;		//self referencing structure
	};
	
void traversal(struct node * ptr){
	while(ptr!=NULL)
	{
		printf("Element is %d\n", ptr->data);
		ptr=ptr->next;
	}
}
	
int main(){
	struct node * head;		//declaring head node
	struct node * second;
	struct node * third;
	struct node * fourth;
	
	// Allocate memory for nodes in the linked list in HEAP.
	head = (struct node *)malloc(sizeof(struct node));  // defining head and head is a struct pointer. To access usre -> operator
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	
	//Link first and second node
	head->data = 7;
	head->next = second;
	
	//Link second and third node
	second->data = 11; 
	second->next = third;
	
	//Terminate the list at the third node
	third->data = 54;
	third->next = fourth;
	
	//Link second and third node
	fourth->data = 78;
	fourth->next = NULL;
	
	traversal(head);
	 n 
}