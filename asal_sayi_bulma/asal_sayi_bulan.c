#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,d,a,count=0;
    printf("sayi giriniz:");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        d=1;
        for(c=2;c<i;c++)
        {
            if (i%c==0)
            {
                d=0;
            }
        }
     if(d==1)
     {
         printf("%d\n",i);
         count++;
     }
    }
   printf("%d tane vardir",count);
    return 0;
}
