#include<stdio.h>
#include<stdlib.h>
struct club
{
	int rollno;
	char name[100];
	struct club *next;
}club;
struct club *create(struct club *president);
struct club *insert_president(struct club *president);
struct club *insert_secretary(struct club *president,struct club *secretary);
struct club *insert_student(struct club *president);
struct club *delete_president(struct club *president);
struct club *delete_secretary(struct club *president,struct club *secretary);
struct club *delete_student(struct club *president);
void display(struct club *president);
struct club *concat(struct club *president);
void main()
{
	struct club *president,*secretary,*q;
	president=secretary=NULL;
	int n,i,flag=1,ch;
	printf("how many students?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		president=create(president);
	}
	q=president;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	secretary=q;
	do
	{
		printf("\nmenu:\n1:display list\n2:insert president\n3:insert secretary\n4:insert student\n5:delete president\n6:delete secretary\n7:delete student\n8:concat\n9:exit");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:display(president);
				break;
			case 2:president=insert_president(president);
				break;
			case 3:president=insert_secretary(president,secretary);
				break;
			case 4:president=insert_student(president);
				break;
			case 5:president=delete_president(president);
				break;
			case 6:president=delete_secretary(president,secretary);
				break;
			case 7:president=delete_student(president);
				break;
			case 8:president=concat(president);
				q=president;
				while(q->next!=NULL)
				{
					q=q->next;
				}
				secretary=q;
				break;
			case 9:flag=0;
				break;
            default:printf("wrong choice");
				break;
		}
	}while(flag);

}
struct club *create(struct club *president)
{
	struct club *p,*q;
	p=(struct club *)malloc(sizeof(struct club));
	printf("enter roll no.\n");
	scanf("%d",&p->rollno);
	printf("enter name\n");
	scanf("%s",p->name);
	p->next=NULL;
	if(president==NULL)
	{
		president=p;
	}
	else
	{
		q=president;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
	return president;
}
void display(struct club *president)
{
	struct club *p;
	printf("ROLL NUMBER\tNAME");
	p=president;
	while(p!=NULL)
	{
		printf("\n%d\t\t%s",p->rollno,p->name);
		p=p->next;
	}
}
struct club *insert_president(struct club *president)
{
	struct club *p;
	p=(struct club *)malloc(sizeof(struct club));
	printf("enter roll no. of president\n");
	scanf("%d",&p->rollno);
	printf("enter name of president\n");
	scanf("%s",p->name);
	p->next=NULL;
	if(president==NULL)
	{
		president=p;
	}
	else
	{
		p->next=president;
		president=p;
	}
	return president;
}
struct club *insert_secretary(struct club *president,struct club *secretary)
{
	struct club *q,*p;
	p=(struct club *)malloc(sizeof(struct club));
	printf("enter roll no.");
	scanf("%d",&p->rollno);
	printf("enter name");
	scanf("%s",p->name);
	p->next=NULL;
	if(secretary==NULL)
	{
		president->next=p;
		secretary=p;
	}
	else
	{
		secretary->next=p;
		secretary=p;
	}
	return president;
}
struct club *insert_student(struct club *president)
{
	struct club *q,*p;
	int i,loc;
	p=(struct club *)malloc(sizeof(struct club));
	printf("enter roll no.\n");
	scanf("%d",&p->rollno);
	printf("enter name\n");
	scanf("%s",p->name);
	p->next=NULL;
	printf("enter location you want to add student\n");
	scanf("%d",&loc);
	q=president;
	for(i=1;i<loc-1;i++)
	{
		q=q->next;
	}
	p->next=q->next;
	q->next=p;
	return president;
}

struct club *delete_president(struct club *president)
{
	struct club *p;
	if(president!=NULL)
    {
        p=president;
        president=president->next;
        free(p);
    }
    else
    {
        printf("underflow\n");
    }
	return president;
}
struct club *delete_secretary(struct club *president,struct club *secretary)
{
	struct club *q,*p;
	if(president!=NULL)
    {
        q=president;
        while(q->next->next!=NULL)
        {
            q=q->next;
        }
        p=secretary;
        secretary=q;
        free(p);
    }
    else
    {
        printf("underflow\n");
    }
	return president;
}
struct club *delete_student(struct club *president)
{
	int i,roll,flag=1;
	struct club *p,*q;
	printf("enter rollno. of student you want to delete\n");
	scanf("%d",&roll);
	if(president!=NULL)
    {
        q=president;
        while(q!=NULL)
        {
            if(q->next->rollno==roll)
            {
                p=q->next;
                q->next=q->next->next;
                free(p);
                flag=0;
                break;
            }
            q=q->next;
        }
        if(flag)
        {
            printf("roll number not found\n");
        }
    }
    else
    {
        printf("underflow\n");
    }
	return president;
}
struct club *concat(struct club *president)
{
	struct club *president1,*q;
	int n,i;
	president1=NULL;
	printf("create linked list to concat\n");
	printf("how many students?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		president1=create(president1);
	}
	if(president!=NULL)
    {
        q=president;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=president1;
    }
	else
    {
        president=president1;
    }
	return president;
}




