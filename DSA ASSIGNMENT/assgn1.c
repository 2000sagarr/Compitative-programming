//performing set operation using c array
#include<stdio.h>
void un(int badminton[],int cricket[],int nb,int nc);
void inter(int badminton[],int cricket[],int nb,int nc);
void ob(int badminton[],int cricket[],int nb,int nc);
void oc(int badminton[],int cricket[],int nb,int nc);
void no(int badminton[],int cricket[],int nb,int nc);
void main()
{
	int badminton[65];
	int cricket[65];
	int i,j,nb,nc,ch,f=1;
	printf("enter the number of the students playing badminton\n");
	scanf("%d",&nb);
	printf("enter the roll no. of students playing badminton\n");
	for(i=0;i<nb;i++)
	{
		scanf("%d",&badminton[i]);
	}
	printf("enter the number of the students playing cricket\n");
	scanf("%d",&nc);
	printf("enter the roll no. of students playing cricket\n");
	for(j=0;j<nc;j++)
	{
		scanf("%d",&cricket[j]);
	}
	printf("roll no. of the students playing badminton:");

	printf("{");
	for(i=0;i<nb;i++)
	{
		printf("\t%d",badminton[i]);
	}
	printf("}");
	printf("\nroll no. of the students playing cricket:");
	printf("{");
	for(j=0;j<nc;j++)
	{
		printf("\t%d",cricket[j]);
	}
	printf("}");
	do
	{
		printf("\nmenu:");
		printf("\n1:union");
		printf("\n2:intersection");
		printf("\n3:only badminton");
        printf("\n4:only cricket");
        printf("\n5:complement");
		printf("\n6:exit");
		printf("\nenter the choice of operation");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:un(badminton,cricket,nb,nc);
			break;
			case 2:inter(badminton,cricket,nb,nc);
			break;
			case 3:ob(badminton,cricket,nb,nc);
			break;
			case 4:oc(badminton,cricket,nb,nc);
			break;
			case 5:no(badminton,cricket,nb,nc);
			break;
			case 6:f=0;
			break;
			default:printf("wrong choice");
			break;
		}
	}while(f);
}

void un(int badminton[],int cricket[],int nb,int nc)
{
	int i,j,k,flag;
	int un[65];
	for(i=0;i<nb;i++)
	{
		un[i]=badminton[i];
	}
	for(j=0;j<nc;j++)
	{
	    flag=1;
		for(k=0;k<i;k++)
		{
			if(cricket[j]==un[k])
			{
                flag=0;
				break;
			}
        }
		if(flag)
		{
			un[i]=cricket[j];
			i++;
		}

	}
	printf("{");
	for(j=0;j<i;j++)
	{

		printf("\t%d",un[j]);

	}
	printf("}");
}

void inter(int badminton[],int cricket[],int nb,int nc)
{
	int i,j,k=0;
	int inter[65];
	for(i=0;i<nb;i++)
	{
		for(j=0;j<nc;j++)
		{
			if(badminton[i]==cricket[j])
			{
				inter[k]=cricket[j];
				k++;
			}
		}
	}
	printf("{");
	for(j=0;j<k;j++)
	{
		printf("\t%d",inter[j]);
	}
	printf("}");
}
void ob(int badminton[],int cricket[],int nb,int nc)
{
    int i,j,k=0,flag=1;
    int ob[65];
    for(i=0;i<nb;i++)
    {
        for(j=0;j<nc;j++)
        {
            if(badminton[i]==cricket[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            ob[k]=badminton[i];
            k++;
        }
    }
    printf("{");
    for(i=0;i<k;i++)
    {
        printf("\t%d",ob[i]);
    }
    printf("}");
}
void oc(int badminton[],int cricket[],int nb,int nc)
{
    int i,j,k=0,flag=1;
    int oc[65];
    for(i=0;i<nc;i++)
    {
        for(j=0;j<nb;j++)
        {
            if(cricket[i]==badminton[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            oc[k]=cricket[i];
            k++;
        }
    }
    printf("{");
    for(i=0;i<k;i++)
    {
        printf("\t%d\t",oc[i]);
    }
    printf("}");
}
void no(int badminton[],int cricket[],int nb,int nc)
{
  int i,j,k,m,flag;
	int un[65],no[65];
	int universal[65];
	for(i=0;i<20;i++)
    {
        universal[i]=i+1;
    }
	for(i=0;i<nb;i++)
	{
		un[i]=badminton[i];
	}
	for(j=0;j<nc;j++)
	{
	    flag=1;
		for(k=0;k<i;k++)
		{
			if(cricket[j]==un[k])
			{
                flag=0;
				break;
			}
        }
		if(flag)
		{
			un[i]=cricket[j];
			i++;
		}
        m=i;
	}
	k=0;
	for(i=0;i<20;i++)
    {
        for(j=0;j<m;j++)
        {
            flag=1;
            if(un[j]==universal[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            no[k]=universal[i];
            k++;
        }
    }
	printf("{");
	for(j=0;j<k;j++)
	{
		printf("\t%d",no[j]);
    }
    printf("}");
}
