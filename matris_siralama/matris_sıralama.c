#include <stdio.h>
#include <stdlib.h>
//n*n boyutlu matrisin kucukten buyuge siralama
int main()
{
    int dizi[3][3]= {{3,1,5},{7,5,2},{4,6,8}} ;
   int i,j,k,l,temp;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            temp=dizi[i][j];
            l=j+1;
            for (k=i; k<3; k++)
            {
                for (;l<3;l++)
                {
                    if ( temp>dizi[k][l])
                    {
                        temp=dizi[k][l];
                        dizi[k][l]=dizi[i][j];
                        dizi[i][j]=temp;
                    }
                }
                l=0;
            }
        }
    }
    printf("matrisin  kucukten buyuge dizili hali:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
