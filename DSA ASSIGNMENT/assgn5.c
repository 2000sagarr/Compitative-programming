//set operation using linked list
#include<stdio.h>
#include<stdlib.h>
struct icecream
{
    int rollno;
    struct icecream *next;
}icecream;
struct icecream *create(struct icecream *head);
void display(struct icecream *head);
void un(struct icecream *vanilla,struct icecream *butterscotch);
void inter(struct icecream *vanilla,struct icecream *butterscotch);
void ov(struct icecream *vanilla,struct icecream *butterscotch);
void ob(struct icecream *vanilla,struct icecream *butterscotch);
void no(struct icecream *vanilla,struct icecream *butterscotch);
void main()
{
    struct icecream *vanilla,*butterscotch;
    vanilla=butterscotch=NULL;
    int nv,nb,i,ch,f=1;
    printf("enter the number of students who likes vanilla icecream\n");
    scanf("%d",&nv);
    printf("enter roll number\n");
    for(i=0;i<nv;i++)
    {
        vanilla=create(vanilla);
    }
    printf("enter the number of students who likes butterscotch icecream");
    scanf("%d",&nb);
    printf("enter roll number");
    for(i=0;i<nb;i++)
    {
        butterscotch=create(butterscotch);
    }
    do
	{
		printf("\nmenu:\n1:display vanilla\n2:display butterscotch\n3:union\n4:intersection\n5:only vanilla\n6:only butterscotch\n7:complement\n8:exit\nenter the choice of operation");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:display(vanilla);
            break;
            case 2:display(butterscotch);
            break;
			case 3:un(vanilla,butterscotch);
			break;
			case 4:inter(vanilla,butterscotch);
			break;
			case 5:ov(vanilla,butterscotch);
			break;
			case 6:ob(vanilla,butterscotch);
			break;
			case 7:no(vanilla,butterscotch);
			break;
			case 8:f=0;
			break;
		}
	}while(f);
}
struct icecream *create(struct icecream *head)
{
    	struct icecream *p,*q;
    	p=(struct icecream *)malloc(sizeof(struct icecream));
   	scanf("%d",&p->rollno);
	p->next=NULL;
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
	}
	return head;
}
void display(struct icecream *head)
{
    struct icecream *p;
    p=head;
    printf("\n{");
    while(p!=NULL)
    {
        printf("\t%d",p->rollno);
        p=p->next;
    }
    printf("}");
}
void un(struct icecream *vanilla,struct icecream *butterscotch)
{
	struct icecream *p,*q,*r,*s,*head;
	int flag;
	p=vanilla;
	printf("\n{");
    	while(p!=NULL)
    	{
        	printf("\t%d",p->rollno);
       	 	p=p->next;
    	}
	/*head=NULL;
	while(p!=NULL)
	{
		if(head==NULL)
		{
			head=r=(struct icecream*)malloc(sizeof(icecream));
			r->next=NULL;
		}
		else
		{
			r->next=(struct icecream*)malloc(sizeof(icecream));
			r=r->next;
			r->next=NULL;
		}
		r->rollno=p->rollno;
		p=p->next;
	}*/
	q=butterscotch;
	while(q!=NULL)
	{
		flag=0;
		p=vanilla;
		while(p!=NULL)
		{
			if(q->rollno==p->rollno)
			{
				flag=1;
				break;
			}
			p=p->next;
		}
		if(flag==0)
		{
			printf("\t%d",q->rollno);
			/*r=(struct icecream*)malloc(sizeof(icecream));
			r->rollno=q->rollno;
			r->next=NULL;
			if(head==NULL)
			{
				head=r;
			}
			else
			{
				s=head;
				while(s->next!=NULL)
				{
					s=s->next;
				}
				s->next=r;
			}*/
		}
		q=q->next;
	}
	printf("}");
	//display(head);
}
void inter(struct icecream *vanilla,struct icecream *butterscotch)
{
    	struct icecream *p,*q,*r,*s,*head;
	head=NULL;
	q=butterscotch;
	printf("{");
    	while(q!=NULL)
    	{
		p=vanilla;
		while(p!=NULL)
		{
			if(p->rollno==q->rollno)
			{
				printf("\t%d",p->rollno);
				/*r=(struct icecream*)malloc(sizeof(icecream));
				r->rollno=q->rollno;
				r->next=NULL;
				if(head==NULL)
				{
					head=r;
				}
				else
				{
					s=head;
					while(s->next!=NULL)
					{
					s=s->next;
					}
					s->next=r;
				}*/
				break;
			}
			p=p->next;
		}
		q=q->next;
	}
	printf("}");
    	//display(head);
}
void ov(struct icecream *vanilla,struct icecream *butterscotch)
{
	struct icecream *head,*p,*q,*r,*s;
	head=NULL;
	int flag;
	p=vanilla;
	printf("{");
    	while(p!=NULL)
    	{
		flag=0;
		q=butterscotch;
		while(q!=NULL)
		{
			if(p->rollno==q->rollno)
			{
				flag=1;
				break;
			}
			q=q->next;
		}
		if(flag==0)
		{
			printf("\t%d",p->rollno);
		}
		/*if(flag==0)
		{
			r=(struct icecream*)malloc(sizeof(icecream));
			r->rollno=p->rollno;
			r->next=NULL;
			if(head==NULL)
			{
				head=r;
			}
			else
			{
				s=head;
				while(s->next!=NULL)
				{
				s=s->next;
				}
				s->next=r;
			}
		}*/
		p=p->next;
	}
	printf("}");
    	//display(head);
}
void ob(struct icecream *vanilla,struct icecream *butterscotch)//to print only
{
	struct icecream *head,*p,*q,*r,*s;
	head=NULL;
	int flag;
	q=butterscotch;
	printf("{");
    	while(q!=NULL)
    	{
		flag=0;
		p=vanilla;
		while(p!=NULL)
		{
			if(p->rollno==q->rollno)
			{
				flag=1;
				break;
			}
			p=p->next;
		}
		if(flag==0)
		{
			printf("\t%d",q->rollno);
		}
		/*if(flag==0)
		{
			r=(struct icecream*)malloc(sizeof(icecream));
			r->rollno=q->rollno;
			r->next=NULL;
			if(head==NULL)
			{
				head=r;
			}
			else
			{
				s=head;
				while(s->next!=NULL)
				{
				s=s->next;
				}
				s->next=r;
			}
		}*/
		q=q->next;
	}
	printf("}");
    	//display(head);
}
void no(struct icecream *vanilla,struct icecream *butterscotch)
{
    struct icecream *p,*q;
    int flag=1,i;
    printf("{");
    for(i=1;i<=20;i++)
    {
        flag=1;
        p=vanilla;
        while(p!=NULL)
        {
           if(p->rollno==i)
           {
               flag=0;
               break;
           }
           p=p->next;
        }
        q=butterscotch;
        while(q!=NULL)
        {
            if(q->rollno==i)
            {
                flag=0;
                break;
            }
            q=q->next;
        }
        if(flag)
        {
            printf("\t%d",i);
        }
    }
    printf("}");
}
