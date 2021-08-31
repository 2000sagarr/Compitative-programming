//pizza parlour or job queue
#include<stdio.h>
# define MAX 100
struct cqueue
{
	int data[MAX];
	int front;
	int rear;
};
void init(struct cqueue *q);
int isempty(struct cqueue *q);
int isfull(struct cqueue *q);
void display(struct cqueue *q);
void enqueueR(struct cqueue *q,int x);
void dequeueF(struct cqueue *q);
void main()
{
	struct cqueue q,*p;
	int x,ch,i,flag=1;
	init(&q);
	do
   	{
        printf("\nmenu:\n1.check isfull?\n2.check isempty?\n3.display\n4.enqueue at rear\n5.dequeue at front\n6.exit\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(isfull(&q))
                    printf("queue is full.");
                    else
                    printf("queue is not full");
            break;
            case 2:if(isempty(&q))
                    printf("queue is empty.");
                    else
                    printf("queue is not empty");
            break;
            case 3:display(&q);
            break;
            case 4:printf("enter the value");
                    scanf("%d",&x);
                    enqueueR(&q,x);
            break;
            case 5:dequeueF(&q);
            break;
            case 6:flag=0;
            break;
            default:printf("wrong choice!....enter valid choice.");
            break;
        }
    }while(flag);
}
void init(struct cqueue *q)
{
	q->front=q->rear=-1;
}
int isempty(struct cqueue *q)
{
	if(q->rear==-1)
	{
        return 1;
	}
    return 0;
}
int isfull(struct cqueue *q)
{
	if(q->front==(q->rear+1)%MAX)
	{
        return 1;
	}
	return 0;
}
void enqueueR(struct cqueue *q,int x)
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
            q->rear=(q->rear+1)%MAX;
            q->data[q->rear]=x;
		}
	}
	else
	{
        printf("\noverflow");
	}
}


void dequeueF(struct cqueue * q)
{
	int x;
	if(!isempty(q))
	{
        x=q->data[q->front];
		if(q->front==q->rear)
		{
            init(q);
        }
		else
		{
            q->front=(q->front+1)%MAX;
        }
        printf("deleted element is %d",x);
	}
	else
	{
        printf("\n underflow");
	}
}
void display(struct cqueue *q)
{
	int i;
	if(!isempty(q))
    {
        i=q->front;
        while(i!=(q->rear+1)%MAX)
		{
			printf("%d\t",q->data[i]);
            i=(i+1)%MAX;
		}
    }
    else
    {
        printf("queue is empty....nothing to display!!");
    }
}
