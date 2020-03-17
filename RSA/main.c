#include <stdio.h> #include <stdlib.h>
//RSA
int ebob(int x,int y)
{
    int r;
    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int tersBulma(int a,int m)
{
    int t0=0,t=1,r,temp;
    double q;
    int m2 = m;
    int a2 = a;
    q= floor(m2/a2);// yuvarlama
    r=m2-q*a2;
    while(r > 0)
    {
        temp=t0-q*t;
        if(temp >= 0)
        {
            temp = temp % m;
        }
        else
        {
            temp = m-((-temp) % m);
        }
        t0=t;
        t=temp;
        m2=a2;
        a2=r;
        q= floor(m2/a2);// yuvarlama
        r=m2-q*a2;
    }
    if(a2 != 1)
    {
        printf("%d nin modul %d de tersi yok.",a,m);
        return 0;
    }
    else
    {
        int sonuc = t % m;
        return sonuc;
    }
}
int usAlma(int a,int k,int m)
{
    int sonuc=1;
    while(k != 0)
    {
        if(k % 2 == 1)
        {
            sonuc = (sonuc * a) % m;
            k = k - 1;
        }
        else
            // k%2==0
        {
            a = (a * a) % m;
            k = k / 2;
        }
    }
    return sonuc;
}
int AsalKontrol(int sayi)
{
    int kontrol=0, i;
    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            printf("Girdiginiz sayi asal degildir.");
            kontrol=1;
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int p,q,N,t,sifre,e,kontrol;
    printf("\np Sayisi:");
    scanf("%d",&p);
    kontrol= AsalKontrol(p);
    if(kontrol == 1)
    {
        printf("Asal sayi giriniz.");
        return 0;
    }
    printf("\nq Sayisi:");
    scanf("%d",&q);
    kontrol= AsalKontrol(q);
    if(kontrol == 1)
    {
        printf("Asal sayi giriniz.");
        return 0;
    }
    N=p*q;
    t=(p-1)*(q-1);
    printf("1<e<%d ",t);
    printf("Bir e sayisi girin:");
    scanf("%d",&e);
    int sonuc=ebob(e,t);
    if(sonuc != 1)
    {
        printf("\nEbob(%d,%d) != 1 dir.1 olmasi gerekiyor\n",e,t);
        return 0;
    }
    int d=tersBulma(e,t); //d gizli anahtar
    printf("Sifrelemek istedigin sayi:");
    scanf("%d",&sifre);
    int c=usAlma(sifre,e,N);
    printf("Sifre : %d \n",c);
      // int m=usAlma(c,d,N);
         //printf("Sifrelemek istedigin sayi: %d",m);
         return 0;
}

