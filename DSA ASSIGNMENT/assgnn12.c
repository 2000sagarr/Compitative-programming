#include<stdio.h>
#include<stdlib.h>
void linear_search(int array[],int n,int key);
void binary_search(int array[],int first,int last,int key);
void main()
{
    int i,n,key,array[100],choice;
    printf("how many elements in array\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter element you want to search");
    scanf("%d",&key);
    printf("menu:\n1.linear search\n2.binary search\n");
    printf("enter choice for method of searching");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:linear_search(array,n,key);
                break;
        case 2:binary_search(array,0,n-1,key);
                break;
        default:printf("wrong choice");
                break;
    }
}

void linear_search(int array[],int n,int key)
{
    int i,flag=1;
    for(i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            flag=0;
            printf("element is found at location %d",i);
            break;
        }
    }
    if(flag)
    {
        printf("element not found");
    }
}
void binary_search(int array[],int first,int last,int key)
{
    int mid,flag=1;
    if(first<last)
    {
        mid=(first+last)/2;
        if(array[mid]==key)
        {
            flag=0;
            printf("element is found at location %d",mid);
            exit(0);
        }
        else if(array[mid]>key)
        {
            binary_search(array,first,mid - 1,key);
        }
        else
        {
            binary_search(array,mid + 1,last,key);
        }
    }
    if(flag)
    {
        printf("element not found");
        exit(0);
    }
}
