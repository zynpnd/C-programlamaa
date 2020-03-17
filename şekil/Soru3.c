#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,bosluk;
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d", &n);

    if(n%2 == 0)
        n++;

    for(i=n;i>0;i=i-2)
    {
        bosluk = (n-i)/2;
        for(j=0;j<bosluk;j++)
            printf(" ");

        for(j=0;j<i;j++)
            printf("*");

        printf("\n");
    }

    for(i=3;i<=n;i=i+2)
    {
        bosluk = (n-i)/2;
        for(j=0;j<bosluk;j++)
            printf(" ");

        for(j=0;j<i;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
