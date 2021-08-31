//checking pallindrom
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
struct stack
{
    char data[MAX];
    int top;
};
void init(struct stack *s)
{
    s->top=-1;
}
int isempty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack *s)
{
    if(s->top==MAX-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *s,char m)
{
    if(!isfull(s))
    {
        s->top+=1;
        s->data[s->top]=m;
    }
    else
    {
        printf("overflow");
    }
}
char pop(struct stack *s)
{
    char x;
    if(!isempty(s))
    {
        x=s->data[s->top];
        s->top--;
    }
    else
    {
        printf("underflow");
        return 0;
    }
    return x;
}
void main()
{
    struct stack s;
    init(&s);
    char data1[100];
    printf("enter string\n");
    scanf("%s",data1);
    int i,j=0,flag=0;
    for(i=0;data1[i]!='\0';i++)
	{
            if(97>data1[i]&&data1[i]>64)
            {
                data1[i]=data1[i]+32;
            }
    }
    printf("string after conversion %s\n",data1);
    char x;
    for(i=0;data1[i]!='\0';i++)
    {
        x=data1[i];
        push(&s,x);
    }
    for(i=0;data1[i]!='\0';i++)
    {
        x=pop(&s);
        if(x!=data1[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("entered string is not pallindrom");
    }
    else
    {
        printf("entered string is pallindrom");
    }
}
