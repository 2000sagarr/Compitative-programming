//string operations
#include<stdio.h>
int stringlength(char str1[]);
void stringcopy(char str1[]);
void reverse(char str1[],int length);
void stringconcat(char str1[],int length);
void pallindrom(char str1[],int length);
void upr(char str1[]);
void lwr(char str1[]);
void main()
{
	char str1[100],str2[100];
	int i,f=1,ch;
	int length;
	printf("enter the string\n");
	for(i=0;str1[i-1]!='\n';i++)
	{
	scanf("%c",&str1[i]);
	}
	str1[i-1]='\0';
	printf("entered string is %s",str1);
	length=stringlength(str1);
	do
	{
        printf("\nmenu:\n1:string length\n2:string copy\n3:string reverse\n4:string concat\n5:check pallindrom\n6:convert to uppercase\n7:convert to lowercase\n8:exit");
        printf("\nenter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:length=stringlength(str1);
                printf("\nlength of string is %d",length);
                break;
            case 2:stringcopy(str1);
                break;
            case 3:length=stringlength(str1);
                reverse(str1,length);
                break;
            case 4:length=stringlength(str1);
                stringconcat(str1,length);
                break;
            case 5:length=stringlength(str1);
                pallindrom(str1,length);
                break;
            case 6:upr(str1);
                break;
            case 7:lwr(str1);
                break;
            case 8:f=0;
                break;
            default:printf("wrong choice");
                break;
        }
	}while(f);
}
int stringlength(char str1[])
{
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void stringcopy(char str1[])
{
    char str2[100];
    int i;
    printf("\nenter the string you want to copy to string1");
    scanf("%s",str2);
    for(i=0;str2[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("\nstring after copying is %s",str1);
}
void reverse(char str1[],int length)
{
    int i=0,j=length-1;
    char temp;
    while(i<j)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
    }
    printf("\nstring after reversing is %s",str1);
}
void stringconcat(char str1[],int j)
{
	char str2[100];
	int i,k;
	printf("\nenter the string you want to append to string1");
	scanf("%s",str2);
	for(i=0;str2[i]!='\0';i++)
	{
	   str1[j]=str2[i];
	   j++;
	}
	str1[j]='\0';
	printf("\nstring after concatenation %s",str1);
}
void pallindrom(char str1[],int length)
{
	int i=0,j=length-1;
	while(i<j)
	{
		if(str1[i]==str1[j])
		{
			i++;
			j--;
		}
		else
		{
			printf("\nthis is not a pallindrom\n");
			break;
		}
	}
	if(i>=j)
	{
		printf("\nthis is pallindrom\n");
	}
}
void upr(char str2[])
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
        if(96<str2[i]&&str2[i]<129)
        {
            str2[i]=str2[i]-32;
        }
	}
	printf("\nuppercase string is %s",str2);
}
void lwr(char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
        if(97>str1[i]&&str1[i]>64)
        {
                str1[i]=str1[i]+32;
        }
    }
	printf("\nlowercase string is %s",str1);
}

