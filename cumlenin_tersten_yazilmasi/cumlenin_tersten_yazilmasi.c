#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terstenYazdir(char *);

void terstenYazdir(char *chPt)
{
    int i=0,uzunluk=0;
//once string uzunlugunu bul
    uzunluk=strlen(chPt);

//simdi string sondan baslayarak basa kadar tara
//ve okunan karakterleri ekrana yazdir

    for (i=uzunluk-1; i>=0; i--)
    {
        putchar(*(chPt+i));
    }
}
int main()
{
    char chPt[100];
    puts("bir cumle giriniz (max 100 karakter):");
    //cumleyi diziye yerleþtir.
    gets (chPt);
    //terten yazdir
    terstenYazdir(chPt);
    return 0;
}
