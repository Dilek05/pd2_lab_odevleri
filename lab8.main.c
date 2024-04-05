//
//  main.c
//  pd2_lab8
//
//  Created by Dilek ÜNLÜ on 6.04.2024.
//


/*#include <stdio.h>

void selectionSort(int[ ], int);

int main(void)
{
    int i=0, a[5];
    
    printf("sıralamak istediğin 5 sayi gir\n");
    while (i<5)
    {
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    
    selectionSort(a, 5);
    
    printf("selectionSort işleminden sonra...\n");
    while (i<5)
    {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}

void selectionSort(int dizi[ ], int n)
{
    int i,j;
    int index, enkucuk;
    
    for (i=0 ; i<n-1 ; i++)
    {
        enkucuk = dizi[n-1];
        index = n-1;
        
        for (j=i ; j<n ; j++)
        {
            if (dizi[j] < enkucuk )
            {
                enkucuk = dizi[j];
                index = j;
            }
        }
        dizi[index] = dizi[i];
        dizi[i] = enkucuk;
    }
}*/









/*#include <stdio.h>

void bubleSort(int [ ], int);

int main(void)
{
    int i=0, a[5];
    
    printf("sıralamak istediğin 5 sayi gir \n");
    
    while (i<5){
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    
    bubleSort(a, 5);
    
    printf("bubleSort işleminden sonra....\n");
    while (i<5) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    return 0;
}
               
void bubleSort( int dizi[ ], int n)
{
    int gecici;
    int i,k;
    
    for (i=0; i < n-1 ; i++)
    {
        for (k=0; k < n-1-i ; k++)
        {
            if (dizi[k] > dizi[k+1] )
            {
                gecici = dizi[k];
                dizi[k] = dizi[k+1];
                dizi[k+1] = gecici;
            }
        }
    }
}*/









/*#include <stdio.h>

void insertionSort(int[ ], int);

int main(void)
{
    int i=0, a[5];
    
    printf("sıralamak istediğin 5 sayi gir\n");
    while (i<5)
    {
        scanf("%d", &a[i]);
        i++;
    }
    i=0;
    
    insertionSort(a, 5);
    
    printf("insertionSort işleminden sonra...\n");
    while (i<5)
    {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}

void insertionSort(int dizi[ ], int n)
{
    int ekle, k, i;
    
    for ( i=1 ; i<n ; i++)
    {
        ekle = dizi[i];
        
        for ( k=i-1;  k >= 0 && ekle <= dizi[k] ; k--)
            dizi[k+1] = dizi[k];   //geriye kaydırma
        
        dizi [k+1] = ekle;         //uygun yer boşaltıldı
    }
}*/






 
 

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char kelime_1[50] = "Hello";
    char kelime_2[50] = " World!";
    char birlesik_kelime[100];

    size_t len1, len2;
    
    len1 = strlen(kelime_1);
    len2 = strlen(kelime_2);

    printf("1.kelimenin uzunlugu: %zu\n", len1);
    printf("2.kelimenin uzunlugu: %zu\n", len2);

    if (len2 < sizeof(kelime_1) - len1)
    {
        strcpy(birlesik_kelime, kelime_1);
        strcat(birlesik_kelime, kelime_2);
        printf("iki kelimenin birleşimi : %s\n", birlesik_kelime);
    } 
    else
    {
        printf("Hedef stringin boyutu yetersiz.\n");
    }

    int karsilastirma = strcmp(kelime_1, kelime_2);
    
    if (karsilastirma == 0)
        printf("1.kelime ve 2.kelime ayni.\n");
    else if (karsilastirma < 0)
        printf("1.kelime, 2.kelimeden alfabetik olarak önce.\n");
    else
        printf("1.kelime, 2.kelimeden alfabetik olarak sonra.\n");
    
    return 0;
}*/

