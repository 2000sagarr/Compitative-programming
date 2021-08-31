#include<stdio.h>
#include<string.h>
#define MAX 20
struct stack
{
    char data[MAX];
    int top;
};
void parenthesized();
void init(struct stack *p)
{
    p->top=-1;
}

int isempty(struct stack *p)
{
    if (p->top==-1)
    {
        return 1;
    }
    return 0;

}
int isfull(struct stack *p)
{
    if (p->top==MAX-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *p,char x)
{
    if (!isfull(p))
    {
        p->data[++p->top]=x;
    }
}
char pop(struct stack *p)
{
    char x;
    if (!isempty(p))
    {
        x=p->data[p->top];
        p->top--;
        return x;
    }
    return('\0');
}
void parenthesized()
{
    int i;
    char expression[100],x;
    struct stack p;
    init(&p);
    printf("ENTER THE EXPRESSION : ");
    scanf("%s",expression);
    for (i = 0;expression[i]!='\0'; i++)
    {
        if(expression[i]=='(')
        {
            push(&p,'(');
        }
        if(expression[i]=='{')
        {
            push(&p,'{');
        }
        if(expression[i]=='[')
        {
            push(&p,'[');
        }
        if (expression[i]==')')
        {
            if (!isempty(&p))
            {
                x=pop(&p);
                if(x!='(')
                {
                    printf("missmatched");
                    break;
                }
            }
            else
            {
                printf("missmatched");
                break;
            }

        }
        if (expression[i]=='}')
        {
            if (!isempty(&p))
            {
                x=pop(&p);
                if(x!='{')
                {
                    printf("missmatched");
                    break;
                }
            }
            else
            {
                printf("missmatched");
                break;
            }
        }
        if (expression[i]==']')
        {
            if (!isempty(&p))
            {
                x=pop(&p);
                if(x!='[')
                {
                    printf("missmatched");
                    break;
                }
            }
            else
            {
                printf("missmatched");
                break;
            }

        }

    }
    if(isempty(&p))
    {
        printf("fully parenthesized");
    }
    else
    {
        printf("missmatched");
    }
}

void main()
{
    parenthesized();
}
