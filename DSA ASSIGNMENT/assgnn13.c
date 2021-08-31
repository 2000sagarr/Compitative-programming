#include<stdio.h>
void swap(float a,float b);
void quicksort(float array[],int low,int high);
int partition(float array[],int low,int high);
void main()
{
    float array[100];
    int n,i,low,high;
    printf("how many students");
    scanf("%d",&n);
    printf("enter percentage");
    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
    }
    printf("array before quick sort");
    for(i=0;i<n;i++)
    {
        printf("%f\t",array[i]);
    }
    quicksort(array,0,n-1);
    printf("array after quick sort");
     for(i=0;i<n;i++)
    {
        printf("%f\t",array[i]);
    }
}
void quicksort(float array[],int low,int high)
{
    int j;
    j=partition(array,low,high);
    quicksort(array,low,j);
    quicksort(array,j+1,high);
}
int partition(float array[],int low,int high)
{
    float pivot,temp;
    int i,j;
    pivot=array[low];
    i=low;
    j=high;
    while(i<j)
    {
        do
        {
            i++;
        }while(array[i]<pivot);
        do
        {
            j--;
        }while(array[j]>pivot);
        swap(array[i],array[j]);
    }
    swap(pivot,array[j]);
    return j;
}
void swap(float a,float b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
}
