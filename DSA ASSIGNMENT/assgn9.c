//PERFORMING DEQUEUE
#include<stdio.h>
#define max 20
struct queue
{
	int data[max];
	int front,rear;
};
void init(struct queue *q);
void display(struct queue *q);
int isempty(struct queue *q);
int isfull(struct queue *q);
void enqueuer(struct queue *q,int x);
void enqueuef(struct queue *q,int x);
int dequeuef(struct queue *q);
int dequeuer(struct queue *q);
void init(struct queue *q)
{
	q->front=q->rear=-1;
}
int isempty(struct queue *q)
{
	if(q->rear==-1)
	{
		return 1;
	}
	return 0;
}
int isfull(struct queue *q)
{
	if(q->rear==max-1)
	{
		return 1;
	}
	return 0;
}
void enqueuer(struct queue *q,int x)
{
	if(!isfull(q))
	{
		if(isempty(q))
		{
			q->front=q->rear=0;
			q->data[q->rear]=x;
		}
		else
		{
			q->rear=q->rear+1;
			q->data[q->rear]=x;
		}
	}
	else
	{
		printf("\noverflow");
	}
}
void enqueuef(struct queue *q,int x)
{
	if(isempty(q))
	{
		q->front=q->rear=0;
		q->data[q->front]=x;
	}
	else if(q->front>0)
	{
		q->front=q->front-1;
		q->data[q->front]=x;
	}
	else
	{
		printf("\noverflow");
	}
}
int dequeuef(struct queue *q)
{
	int z;
	if(!isempty(q))
	{
		z=q->data[q->front];
		if(q->rear==0)
		{
			init(q);
		}
		else
		{
			q->front=q->front+1;
		}
		return z;
	}
	else
	{
		printf("\nunderflow");
		return 0;
	}

}
int dequeuer(struct queue *q)
{
	int z;
	if(!isempty(q))
	{
		z=q->data[q->rear];
		if(q->rear==0)
		{
			init(q);
		}
		else
		{
			q->rear=q->rear-1;
		}
		return z;
	}
	else
	{
		printf("\nunderflow");
		return 0;
	}
}
void display(struct queue *q)
{
	int i;
	if(!isempty(q))
	{
		for(i=q->front;i<=q->rear;i++)
		{
			printf("%d\t",q->data[i]);
		}
	}
	else
	{
		printf("\nqueue is empty");
	}
}
void main()
{
	struct queue q;
	int ch,x,flag=1;
	init(&q);
	do
	{
		printf("menu:\n1.check isfull\n2.check isempty\n3.insert data at rear\n4.delete data from front\n5.insert data at front\n6.delete data from rear\n7.display\n8.exit");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(isfull(&q))
				{
					printf("\nqueue is full");
				}
				else
				{
					printf("\nqueue is not full");
				}
				break;
			case 2:if(isempty(&q))
				{
					printf("\nqueue is empty");
				}
				else
				{
					printf("\nqueue is not empty");
				}
				break;
			case 3:printf("\nenter data to enter");
				scanf("%d",&x);
				enqueuer(&q,x);
				printf("\nqueue after insertion");
				display(&q);
				break;
			case 4:x=dequeuef(&q);
				printf("\nqueue after deletion");
				display(&q);
				break;
			case 5:printf("\nenter data to enter");
				scanf("%d",&x);
				enqueuef(&q,x);
				printf("\nqueue after insertion");
				display(&q);
				break;
			case 6:x=dequeuer(&q);
				printf("\nqueue after deletion");
				display(&q);
				break;
			case 7:display(&q);
				break;
			case 8:flag=0;
				break;
			default:printf("\nwrong choice");
				break;
		}
	}while(flag);
}




