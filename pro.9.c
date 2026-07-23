//enrollment number 92500527105
//Write a program to multiply two matrices.

#include <stdio.h>

void main()
{
    int a[3] [3],b[3] [3],c[3] [3],i,j,k;

    printf("\n enter values for matrix a\n");
    for (i=0;i<3;i++)
    {
        for(i=0;i<3,j++)

        {
            printf("\n enter value [%d] [%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

     printf("\n enter values for matrix b\n");
     for(i=0;i<3;i++)
     {
         for (j=0;j<3;j++)
         {
             printf("\n enter value [%d] [%d] : ",i,j);
             scanf("%d",&b[i][j]);
         }
     }

     printf("\n matrix a\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%5d",a[i][j]);
         }
     }
     printf("\n");
}


     printf("\n matrix b\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%5d",a[i][j]);
         }
     }
     printf("\n");
}


     printf("\n matrix c\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%5d",a[i][j]);
         }
     }
     printf("\n");
}



