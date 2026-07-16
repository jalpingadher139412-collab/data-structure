//enrollment number:-92500527105

 Create arrays A, B of size 3, C of size 6, merge A and B into C.

#include<stdio.h>
void main()
{
    int a[3],b[3],c[3],i,j=0;
    printf("\n enter value for a\n");
    for(i=0;i<3;i++)
    {
        printf("\n enter value %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n enter value for b\n");
    for(i=0;i<3;i++)
    {
        printf("\n enter value %d : ",i+1);
        scanf("%d",&b[i]);
    }

    for(i=0;i<3;i++);
    {

        c[j]=b[i];
        j++;

    }
    printf("\n merged elements are as follows\n");
    for(i=0;i<6;i++)
    {
        printf("\n %d",c[i]);
    }
}
