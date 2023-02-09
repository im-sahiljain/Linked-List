#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * list(int n){
    struct node * head = NULL;
    struct node * temp = NULL;
    struct node * p = NULL;
    
    for(int i=0;i<n;i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&(temp->data));
        temp->next = NULL;
        
        if(head == NULL)
        {
        	head = temp;
		}
        else{
            p = head;
            while(p->next != NULL)
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
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    int n=0;
    struct node * head = NULL;
    printf("Enter no of nodes : ");
    scanf("%d",&n);
    head = list(n);
    traversal(head);
    return 0;
}