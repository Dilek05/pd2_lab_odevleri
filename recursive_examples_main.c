//
//  main.c
//  pd2_recursive
//
//  Created by Dilek ÜNLÜ on 6.03.2024.
//




// faktöriyel hesaplama
/*#include <stdio.h>

int faktoriyel(int n) {
    if (n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1);
}

int main() {
    int sayi = 5;
    printf("%d sayısının faktoriyeli: %d\n", sayi, faktoriyel(sayi));
    return 0;
}*/





//toplama işlemi
/*#include <stdio.h>

int toplam(int n) {
    if (n == 0)
        return 0;
    else
        return n + toplam(n - 1);
}

int main() {
    int sayi = 5;
    printf("1'den %d'e kadar olan sayıların toplamı: %d\n", sayi, toplam(sayi));
    return 0;
}*/






//fibonacci
/*#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int sayi = 6;
    printf("%d. Fibonacci sayısı: %d\n", sayi, fibonacci(sayi));
    return 0;
}*/






//üs alma işlemi
/*#include <stdio.h>

double usAlma(double taban, int us) {
    if (us != 0)
        return (taban * usAlma(taban, us - 1));
    else
        return 1;
}

int main() {
    double taban = 2;
    int us = 3;
    printf("%.2lf üzeri %d: %.2lf\n", taban, us, usAlma(taban, us));
    return 0;
}*/






//dizinin elemanları toplamı
/*#include <stdio.h>

int diziToplami(int dizi[], int n) {
    if (n <= 0)
        return 0;
    else
        return dizi[n - 1] + diziToplami(dizi, n - 1);
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizinin Elemanlarının Toplamı: %d\n", diziToplami(dizi, boyut));
    return 0;
}*/





//dizi elemanlarını tersten yazdırma
/*#include <stdio.h>

void tersYazdir(int dizi[], int n) {
    if (n == 0)
        return;
    printf("%d ", dizi[n - 1]);
    tersYazdir(dizi, n - 1);
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizinin Tersi: ");
    tersYazdir(dizi, boyut);
    printf("\n");
    return 0;
}*/





//basamak sayısı bulma
/*#include <stdio.h>

int basamakSayisi(int sayi) {
    if (sayi == 0)
        return 0;
    else
        return 1 + basamakSayisi(sayi / 10);
}

int main() {
    int sayi = 12345;
    printf("%d sayısının basamak sayısı: %d\n", sayi, basamakSayisi(sayi));
    return 0;
}*/






//asal sayı kontrolü
/*#include <stdio.h>

int asalMi(int n, int i) {
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return asalMi(n, i - 1);
}

int main() {
    int sayi = 17;
    if (asalMi(sayi, sayi / 2))
        printf("%d asal bir sayıdır.\n", sayi);
    else
        printf("%d asal bir sayı değildir.\n", sayi);
    return 0;
}*/






//elemanları toplamı verilen bir dizi ortalaması
/*#include <stdio.h>

float ortalama(int dizi[], int n) {
    if (n == 0)
        return 0;
    return (dizi[n - 1] + ortalama(dizi, n - 1) * (n - 1)) / n;
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizinin Ortalaması: %.2f\n", ortalama(dizi, boyut));
    return 0;
}*/




// üs alma işlemi ama negatif
/*#include <stdio.h>

float usAlma(float taban, int us) {
    if (us < 0)
        return 1 / (taban * usAlma(taban, -us - 1));
    else if (us == 0)
        return 1;
    else
        return taban * usAlma(taban, us - 1);
}

int main() {
    float taban = 2;
    int us = -3;
    printf("%.2f üzeri %d: %.2f\n", taban, us, usAlma(taban, us));
    return 0;
}*/





//dizideki en küçük eleman
/*#include <stdio.h>

int minEleman(int dizi[], int n) {
    if (n == 1)
        return dizi[0];
    int min = minEleman(dizi, n - 1);
    return (min < dizi[n - 1]) ? min : dizi[n - 1];
}

int main() {
    int dizi[] = {10, 5, 8, 3, 12};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizideki En Küçük Eleman: %d\n", minEleman(dizi, boyut));
    return 0;
}*/







//sayı tahmini oyunu
/*#include <stdio.h>

int tahminEt(int tahmin) {
    int gizliSayi = 25;
    if (tahmin == gizliSayi)
        return 0;
    else if (tahmin < gizliSayi) {
        printf("Daha büyük bir sayı girin.\n ");
        return 1 + tahminEt(tahmin + 1);
    } 
    else {
        printf("Daha küçük bir sayı girin.\n ");
        return 1 + tahminEt(tahmin - 1);
    }
}

int main(void) {
    int baslangicTahmini ;
    printf("Tahmin etmeniz gereken sayı 1 ile 100 arasında bir tam sayıdır.\n");
    
    printf("tahmininizi giriniz: ");
    scanf("%d", &baslangicTahmini);
    
    int toplamTahmin = tahminEt(baslangicTahmini);
    printf("Tahmin etmek için toplam %d adım gerekli.\n", toplamTahmin);
    return 0;
}*/






















































