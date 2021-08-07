#include<stdio.h>

#include<stdlib.h>

typedef struct node
{
	int data;
	node *next;
	
};
node *createNode(int n);
void display(node *start);
void main()


{
	node *start = NULL;
	int max;
	printf("Enter the number  of nodes");
	scanf("%d",&max);
	start=createNode(max);
	
	display(start);	
}

node *createNode(int n)

{
	node *start=NULL;
	node *ptr=NULL;
	node *newNode=NULL;
	
	for(int i=0;i<n;i++)
	{
		newNode=(node*)malloc(sizeof(node));
		printf("\nenter the %d the data",i+1);
		scanf("%d",&newNode->data);
		newNode->next=NULL;
	if(start==NULL)
    {
       start=newNode;
    }
    else{
       ptr=start;
      
      while(ptr->next!=NULL)
      {
      	ptr=ptr->next;
      }
      ptr->next=newNode;
      
    }   
	}
	return start;
}

void display(node *start)
{
	node *ptr=start;
	
	printf("\nThe linked list is=>");
	
	while(ptr!=NULL)
	{
		printf("[%d]==>",ptr->data);
		if(ptr->next)
		ptr=ptr->next;
	}


	
	
	
}