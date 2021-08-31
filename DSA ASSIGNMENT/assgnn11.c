#include<stdio.h>
void bubblesort(float percentage[],int n);
void selectionsort(float percentage[],int n);
void main()
{
    float percentage[100];
    int n,i,ch,f=1;
    printf("enter number of students\n");
    scanf("%d",&n);
    printf("enter percentage of students\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&percentage[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%f\t",percentage[i]);
    }
    do
    {
    printf("\nmenu:\n1.bubble sort\n2.selection sort\n3.exit");
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:bubblesort(percentage,n);
                break;
        case 2:selectionsort(percentage,n);
                break;
        case 3:f=0;
                break;
        default:printf("wrong choice");
                break;
    }
    }while(f);
}
void bubblesort(float percentage[],int n)
{
    int i,j;
    float temp;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(percentage[j]>percentage[j+1])
            {
                temp=percentage[j];
                percentage[j]=percentage[j+1];
                percentage[j+1]=temp;
            }
        }
    }
     printf("array after bubble sort");
     for(i=0;i<n;i++)
    {
        printf("%f\t",percentage[i]);
    }
}
void selectionsort(float percentage[],int n)
{
    int i,j,min;
    float temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if(percentage[j]<percentage[min])
            {
                min=j;
            }
        }
            temp=percentage[i];
            percentage[i]=percentage[min];
            percentage[min]=temp;
    }
    printf("array after bubble sort");
    for(i=0;i<n;i++)
    {
        printf("%f\t",percentage[i]);
    }
}

