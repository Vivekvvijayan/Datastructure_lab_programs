#include<stdio.h>
#include<conio.h>
#define MAX 5

int queue[MAX],front=-1,rear=-1;

	int enqueue(int data)
	{
		if(front==0 && rear==MAX-1||front==rear+1)
		{
			printf("\noverflow");
			
			return 0;
			
		}
		
		
		
			if(front==-1&& rear==-1)
			{
				front=rear=0;
				
			}
			else{
				
				rear++;
				
			}
			
			
		
		
		queue[rear]=data;
		printf("\nadded=>%d",data);
			
				}
				
					int dequeue()
					{
						if(front==-1)
						{
							printf("\nunderflow");
							return 0;
							
						}
						
						if(front==rear)
				      {
				      	front=rear=-1;
				      	
				      }
				     
				     else
				     {
				     	int value=queue[front];
				     	front++;
				     	printf("\nDeleted=>%d",value);
				     }
						
						
							}	
							
							int peek()
							{
								return queue[rear];
							}
							
							void display()
							{
								int i;
								printf("\nThe latest queue=>");
								
								for(i=front;i<=rear;i++)
								{
									printf("   %d",queue[i]);
								}
							}
							
							
							int main()
							
							{
								int data,choice;
								clrscr();
								
							printf("\n****************CIRCULAR QUEUE*****************");
							do{
							
							
							
							printf("\n1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Exit");
							
							printf("**SELECT OPERATION");
							scanf("%d",&choice);
							
							switch(choice)
							{
								
							case 1:
							printf("\nEnter data =>");
							scanf("%d",&data);
							enqueue(data);	
							break;
							
							case 2:
							
							dequeue();
							break;
							
							case 3:
							printf("\nThe peek element is=>%d",peek());
							break;
							
							case 4:
							
							display();
							break;
							case 5:
							break;
							
							default:
							printf("\nInvalid operation");
							
							
							}
							
							}while(choice!=5);
						
								display();
								printf("\nthe peek is %d",peek());
								
								getch();
							}