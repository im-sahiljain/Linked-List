#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};
struct node *head = NULL, *ptr;
void insert_begin(int value){
	struct node * temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = value;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

void insert_end(int value){
	struct node * temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = value;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		ptr=head;
		
		while(ptr->next = NULL)
		{
			ptr=ptr->next;
		}
		ptr->next = temp;
		temp->next = NULL;
	}
}

void insert_after_specified_element(int value, int element){
	struct node * temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data=value;
	if(head = NULL)
	{
		head = temp;
	}
	else
	{
		ptr = head;
		while(ptr->data != element)
		{
			ptr = ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
}

void delete_begin(){
	if(head == NULL)
	{
		printf("List is empty, Deletion is not possible");
	}
	else
	{
		ptr=head;
		head=head->next;
		ptr->next = NULL;
		free(ptr);
	}
}

void delete_end(){
	if(head == NULL)
	{
		printf("List is empty, Deletion is not possible");
	}	
	
	else
	{
		struct node * q; 
		ptr = head;
		while(ptr->next != NULL)
		{
			q=ptr;
			ptr=ptr->next;
		}
		q->next = NULL;
		free(ptr);
	}
}

void delete_middle(int element){
	if(head == NULL)
	{
		printf("List is empty, Deletion is not possible");
	}
	else
	{
		struct node * q;
		ptr=head;
		while(ptr->data != element)
		{
			q=ptr;
			ptr = ptr->next;
		}
		ptr->next = ptr->next;
		free(ptr);
	}
}

void display()
{
	if(head == NULL)
	{
		printf("List is empty, Deletion is not possible");
	}
	else
	{
		ptr = head;
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}

void main()
{
	int ch, value, element;
	printf("1. Insert_begin \n");
	printf("2. Insert_end \n");
	printf("3. Insert_after_specified_element \n");
	printf("4. Delete_begin \n");
	printf("5. Delete_end \n");
	printf("6. Delete_middle \n");
	printf("7. Exit\n");
	
	while(1)
	{
		printf("Enter the choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the value to insert.");
					scanf("%d",&value);
					insert_begin(value);
					display();
					break;
				}
				case 2:
					{
						printf("Enter the value to insert.");
						scanf("%d",&value);
						insert_end(value);
						display();
						break;
					}
				case 3:
					{
						printf("Enter the value to insert.");
						scanf("%d",&value);
						printf("Enter the position.");
						scanf("%d",&element);
						insert_after_specified_element(value,element);
						display();
						break;
					}
				case 4:
					{
						delete_begin();
						display();
						break;
					}
				case 5:
					{
						delete_end();
						display();
						break;
					}
				case 6:
					{
						printf("Enter which element to delete : ");
						scanf("%d",&element);
						delete_middle(element);
						display();
						break;
					}
				case 7:
					exit(0);		
		}
	}
	
}














