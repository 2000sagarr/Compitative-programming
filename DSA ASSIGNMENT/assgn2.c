//program for accepting marks of students and performing various operation on it
#include<stdio.h>
void average(float marks[],int n);
void max(float marks[],int n);
void min(float marks[],int n);
void absent(float marks[],int n);
void high(float marks[],int n);
void most(float marks[],int n);
void main()
{
	float marks[100];
	int n,i,choice,x,flag=1;
	printf("\nhow many students marks are you going to enter");
	scanf("\n%d",&n);
    printf("\nenter the marks of roll no. enter marks as -1 for absent student\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&marks[i]);
	}
	printf("\nRoll Nos.\t\t\tmarks of students");
	for(i=0;i<n;i++)
	{
	    if(marks[i]!=-1)
        {
            printf("\n%d\t\t\t\t%f",i+1,marks[i]);
        }
        else
        {
            printf("\n%d\t\t\t\tabsent",i+1);
        }

	}
	do
	{
		printf("\nmenu:\n1:average\n2:maximum marks\n3:minimum marks\n4:count of absent students\n5:no. of students with highest marks\n6:marks got by most of students\n7:exit");
		printf("\nenter the choice of operation are you going to perform:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:average(marks,n);
			break;
			case 2:max(marks,n);
			break;
			case 3:min(marks,n);
			break;
			case 4:absent(marks,n);
			break;
			case 5:high(marks,n);
			break;
			case 6:most(marks,n);
			break;
			case 7:flag=0;
			break;
			default:printf("wrong choice");
			break;
		}
	}while(flag);
}

//sub-program for average function
void average(float marks[],int n)
{
	float total=0,avg;
	int j;
	for(j=0;j<n;j++)
	{
	    if(marks[j]!=-1)
        {
            total=total+marks[j];
        }
	}
	avg=total/n;
	printf("%.1f",avg);
}
//sub-program to find maximum marks
void max(float marks[],int n)
{
	float max=0;
	int j;
	for(j=0;j<n;j++)
	{
	    if(marks[j]!=-1)
        {
            if(max<marks[j])
            {
                max=marks[j];
            }
        }
	}
	printf("%f",max);
}

//sub-program to find minimum marks
void min(float marks[],int n)
{
	float mini=marks[0];
	int j;
	for(j=0;j<n;j++)
	{
        if(marks[j]!=-1)
        {
            if(mini>marks[j])
            {
                mini=marks[j];
            }
        }
	}
	printf("%f",mini);
}

//sub program to find absent students
void absent(float marks[],int n)
{
	int j,count=0;
	for(j=0;j<n;j++)
	{
		if(marks[j]==-1)
		{
			count=count+1;
		}
	}
	printf("absent students are %d",count);
}
//sub program to find the no. of students with highest mark
void high(float marks[],int n)
{
	int j,y=0;
	float max=0;
	for(j=0;j<n;j++)
	{
	    if(marks[j]!=-1)
        {
            if(max<marks[j])
            {
                max=marks[j];
            }
        }
	}
	for(j=0;j<n;j++)
	{
		if(marks[j]==max)
		{
			y=y+1;
		}
	}
	printf("no. of students with highest marks are %d",y);
}
void most(float marks[],int n)
{
    int check[n],i,j,m,flag,max=0;
    for(i=0;i<n;i++)
    {
        check[i]=0;
    }
    for(i=0;i<n;i++)
    {
        flag=1;
        if(marks[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(marks[i]==marks[j])
                {
                    flag=0;
                    check[j]++;
                    m=j+1;
                    break;
                }
            }
            if(flag)
            {
               check[i]++;
               m=i+1;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        if(max<check[i])
        {
            max=check[i];
        }
    }
    for(i=0;i<m;i++)
    {
        if(max==check[i])
        {
            printf("\nmarks got by most of students is %f",marks[i]);
            break;
        }
    }
}



