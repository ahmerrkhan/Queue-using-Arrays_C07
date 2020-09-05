#include <stdio.h>
#include <stdlib.h>
#define N 5

int queue[N];
int rear=-1, front =-1;

int main()
{
    int choice;
    int data;

    while(1)
    {
        printf("\nQueue using arrays Operations\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("5.exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("Enter data:\n");
                   scanf("%d",&data);
                   enqueue(data);
                   break;
            case 2:dequeue();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:exit(1);
                   break;
            default:printf("Wrong choice try again\n");
                   break;
        }
    }
}
void enqueue(int x)
{
   if(rear==N-1)
   {
       printf("Queue is Overflow\n");
   }
   else if(rear==-1 && front==-1)
   {
       rear=front=0;
       queue[rear]=x;
   }
   else
   {
       rear++;
       queue[rear]=x;
   }
}
void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is underflow\n");
    }
    else if(rear==front)
    {
        rear=front=-1;
    }
    else
    {
        front++;
    }

}
void peek()
{
  if(rear==-1 && front==-1)
  {
      printf("No Elements in queue.\n");
  }
  else
  {
      printf("Top Element is: %d",queue[front]);
  }
}
void display()
{
   if(rear==-1 && front==-1)
   {
       printf("No Elements\n");
   }
   else
   {
       int i;
       printf("Queue Elements are:\n");
       for(i=front;i<rear+1;i++)
       {
           printf("%d\t",queue[i]);
       }
   }
}
