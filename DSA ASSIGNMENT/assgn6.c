#include<stdio.h>
#include<stdlib.h>
struct dnode
{
	int data;
	struct dnode *next,*prev;
}dnode;
struct dnode *create(struct dnode *head,int x);
struct dnode *merge(struct dnode *mergehead,struct dnode *xhead,struct dnode *yhead);
void display(struct dnode *head);
void main()
{
	struct dnode *xhead,*yhead,*mergehead;
	xhead=yhead=mergehead=NULL;
	int i,nx,ny,x;
	printf("how many elemnts in first linked list\n");
	scanf("%d",&nx);
	printf("\nenter elements in ascending order");
	for(i=0;i<nx;i++)
	{
        printf("\nenter data");
        scanf("%d",&x);
		xhead=create(xhead,x);
	}
	display(xhead);
	printf("\nhow many elemnts in second linked list");
	scanf("%d",&ny);
	printf("\nenter elements in ascending order");
	for(i=0;i<ny;i++)
	{
	    printf("\nenter data");
        scanf("%d",&x);
		yhead=create(yhead,x);
	}
	display(yhead);
	mergehead=merge(mergehead,xhead,yhead);
	printf("\n");
	display(mergehead);
}
struct dnode *create(struct dnode *head,int x)
{
	struct dnode *p,*q;
	p=(struct dnode *)malloc(sizeof(dnode));
	p->next=p->prev=NULL;
	p->data=x;
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->prev=q;
	}
	return head;
}
void display(struct dnode *head)
{
	struct dnode *p;
	if(head!=NULL)
	{
		p=head;
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	}
	else
	{
		printf("linked list is empty");
	}
}
struct dnode *merge(struct dnode *mergehead,struct dnode *xhead,struct dnode *yhead)
{
    struct dnode *p,*q;
    p=xhead;
    q=yhead;
    while(p!=NULL&&q!=NULL)
    {
        if(p->data<q->data)
        {
            mergehead=create(mergehead,p->data);
            p=p->next;
        }
        else if(p->data>q->data)
        {
            mergehead=create(mergehead,q->data);
            q=q->next;
        }
        else
        {
            mergehead=create(mergehead,q->data);
            p=p->next;
            q=q->next;
        }
    }
    while(p!=NULL)
    {
        mergehead=create(mergehead,p->data);
        p=p->next;
    }
    while(q!=NULL)
    {
        mergehead=create(mergehead,q->data);
        q=q->next;
    }
    return mergehead;
}
