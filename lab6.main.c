//
//  main.c
//  pd2_lab6
//
//  Created by Dilek ÜNLÜ on 21.03.2024.
//

/*#include <stdio.h>
#include <stdlib.h>

int main(void){
    int eleman_sayisi;
    
    printf("eleman sayisini giriniz: ");
    scanf("%d", &eleman_sayisi);
    
    int *deger = (int *)calloc(eleman_sayisi, sizeof(int));
    int i;
    
    for (i=0; i < eleman_sayisi; i++)
    {
        printf("%d. sayi: ", i+1);
        scanf("%d", (deger + i));
    }
  

    int j;
    
    int max = *(deger);
    
    for (j=0; j<eleman_sayisi; j++)
    {
        if ( *(deger+j) > max)
        {
            max= *(deger+j);
        }
    }
    printf("%d\n", max);
}*/








/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char ad[ ]= "dilek";
    char soyad[ ]= "ünlü";
    
    char *ptr = (char*)malloc(sizeof(ad)+ 1 + sizeof(soyad));
    
    strcpy(ptr,"dilek ");
    strcpy(ptr+6, "ünlü ");
    
    printf("%s\n", ptr);
    
    return 0;
}*/









/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char ad[] = "dilek"; // Adı kendimiz girdik
    char soyad[] = "ünlü"; // Soyadı kendimiz girdik

    // Ad için minimum bellek alanı ayırıldı
    char *ptr = (char*)malloc(sizeof(ad)); // ad'ın boyutu kadar bellek alanı ayırıldı
    
    strcpy(ptr, ad);
    
    // Bellek alanı, ad ve soyad toplam uzunluğuna göre genişletildi
    ptr = (char*)realloc(ptr, sizeof(ad) + sizeof(soyad) + 2);
    // +2, arada bir boşluk ve sonlandırıcı NULL karakter için
    
    strcat(ptr, " ");
    strcat(ptr, soyad);

    printf("%s\n", ptr);
    
    free(ptr); // Belleği serbest bıraktık
    
    return 0;
}*/





/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char dizi_1[100];
    char dizi_2[100];
    
    printf("birinci string i giriniz: ");
    scanf("%s", dizi_1);
    
    printf("ikinci stringi giriniz: ");
    scanf("%s", dizi_2);
    
    char *ptr = (char*)malloc(sizeof(dizi_1) + sizeof(dizi_2));
    
    strcpy(ptr, dizi_1);
    strcpy(ptr + strlen(dizi_1), dizi_2);
    
    printf("%s\n", ptr);
    
    free(ptr);
    
    return 0;
}*/









/*#include <stdio.h>
#include <stdlib.h>

void cift_ve_tek_ayir(char ogr_num[], int **cift_sayilar, int *cift_sayi_sayisi, char **tek_sayilar, int *tek_sayi_sayisi) 
{
    for (int i = 0; ogr_num[i] != '\0'; i++)
    {
        int rakam = ogr_num[i] - '0'; // Karakteri tamsayıya dönüştür
        
        if (rakam % 2 == 0) 
        {
            *cift_sayilar = (int *)realloc(*cift_sayilar, (*cift_sayi_sayisi + 1) * sizeof(int));
            (*cift_sayilar)[*cift_sayi_sayisi] = rakam;
            (*cift_sayi_sayisi)++;
        }
        else
        {
            *tek_sayilar = (char *)realloc(*tek_sayilar, (*tek_sayi_sayisi + 1) * sizeof(char));
            (*tek_sayilar)[*tek_sayi_sayisi] = rakam;
            (*tek_sayi_sayisi)++;
        }
    }
}

int main(void) 
{
    char ogr_num[] = {'2', '2', '1', '0', '2', '1', '3', '0', '4', '9', '\0'};
    
    int *cift_sayilar = NULL;
    int cift_sayi_sayisi = 0;
    char *tek_sayilar = NULL;
    int tek_sayi_sayisi = 0;
    
    cift_ve_tek_ayir(ogr_num, &cift_sayilar, &cift_sayi_sayisi, &tek_sayilar, &tek_sayi_sayisi);
    
    printf("Çift Sayılar: ");
    for (int i = 0; i < cift_sayi_sayisi; i++) {
        printf("%d ", cift_sayilar[i]);
    }
    printf("\n");
    
    printf("Tek Sayılar: ");
    for (int i = 0; i < tek_sayi_sayisi; i++) {
        printf("%d ", tek_sayilar[i]);
    }
    printf("\n");
    
    free(cift_sayilar);
    free(tek_sayilar);
    
    return 0;
}*/









#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cumleyiTerstenYaz(char *cumle) {
    int uzunluk = strlen(cumle);
    int i, j;
    int kelime_baslangic = 0;

    while (cumle[uzunluk - 1] == ' ') {
        cumle[uzunluk - 1] = '\0';
        uzunluk--;
    }

    // Cümlenin sonundan başlayarak boşluğa kadar olan kelimeleri ters sırayla yazdır
    for (i = uzunluk - 1; i >= 0; i--) {
        if (cumle[i] == ' ') {
            for (j = i + 1; j < uzunluk && cumle[j] != ' '; j++) {
                printf("%c", cumle[j]);
            }
            if (i != 0)
                printf(" ");
        }
        else if (i == 0) { 
            for (j = i; j < uzunluk && cumle[j] != ' '; j++) {
                printf("%c", cumle[j]);
            }
        }
    }
}

int main(void) {
    char cumle[100];

    printf("Bir cumle girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    printf("Cümlenin kelimeleri sondan başa doğru yazıldı: ");
    cumleyiTerstenYaz(cumle);
    printf("\n");

    return 0;
}












