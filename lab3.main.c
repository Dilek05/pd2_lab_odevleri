//
//  main.c
//  pd2_lab3
//




/*#include <stdio.h>

int toplam(int n)
{
    if (n==1)
        return n;
    else
        return (n+toplam(n-1));
}

int main(void){
    int sayi=6;
    printf("sonuç: %d\n", toplam(sayi));
    return 0;
}*/









/*#include <stdio.h>

int sırala(int dizi[ ],int n ){
// dizinin boyutu 1 ise bu eleman en büyüktür
    if(n==1)
        return dizi[0];
    
    int altDiziyiSırala = sırala(dizi,n-1);
    
    if ( dizi[n-1] > altDiziyiSırala)
        return dizi[n-1];
    else
        return altDiziyiSırala;
}

int main (void){
    int dizi[5];
    int n=5; // dizinin boyutu 5 olarak belirtildi
    int i;
    for (i=0; i<5; i++)
    {
        printf("%d. sayi: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("en büyük eleman: %d\n", sırala(dizi,n));
    
    return 0;
}*/








/*#include <stdio.h>

int basamakAnalizi(int sayi)
{
    if(sayi==0)
        return 0;
    
    int kalan= sayi % 10;
    
    return kalan + basamakAnalizi(sayi / 10) ;
}

int main(void)
{
    int sayi;
    
    printf("3 basamaklı sayi giriniz:");
    scanf("%d",&sayi);
   
    printf("sayının basamaklarının toplamı: %d\n",basamakAnalizi(sayi));
    
    return 0;
}*/









/*#include <stdio.h>

int ebob_hesaplama(int sayi1, int sayi2)
{
    // Eğer biri veya her ikisi de 0 veya negatifse, ebob yok
    if (sayi1 <= 0 || sayi2 <= 0)
        return -1; // Hata durumunu belirtmek için -1 döndürüyoruz

    while (sayi1 != sayi2) {
        if (sayi1 > sayi2)
            sayi1 -= sayi2;
        else
            sayi2 -= sayi1;
    }

    return sayi1;
}

int main(void)
{
    int sayi1, sayi2;
    
    printf("    Ebob Hesaplama    \n");
    
    printf("1. pozitif tamsayıyı giriniz: ");
    scanf("%d", &sayi1);
    
    printf("2. pozitif tamsayıyı giriniz: ");
    scanf("%d", &sayi2);

    int ebob = ebob_hesaplama(sayi1, sayi2);
    if (ebob == -1) {
        printf("Hata: Girdiler pozitif tam sayılar olmalıdır.\n");
    } else {
        printf("Ebob: %d\n", ebob);
    }
    
    return 0;
}*/


























