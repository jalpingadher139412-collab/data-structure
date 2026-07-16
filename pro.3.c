//enrollment number:-92500527105
Create arrays A, B and C of size 3, perform C = A + B.

#include<stdio.h>
void main()
{

    int a[10],i,n,search,flag=0;

    printf("\n enter limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        printf("\n enter value %d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n enter value to be search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {

            flag=1;
            printf("\n value %d is found on position : %d",search,i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("\n value not found..");
    }
    }
