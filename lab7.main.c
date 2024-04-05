//
//  main.c
//  pd2_lab7
//




/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void benzerlik_kontrolü(char*, char*);

int main(void)
{
    char *dizi_1, *dizi_2;
    size_t len_1, len_2;
    
    dizi_1 = (char*)malloc(100 * sizeof(char));
    dizi_2 = (char*)malloc(100 * sizeof(char));
    
    printf("birinci kelimeyi giriniz: ");
    scanf("%s",dizi_1);
    
    printf("ikinci kelimeyi giriniz: ");
    scanf("%s", dizi_2);
    
    len_1 = strlen(dizi_1);
    len_2 = strlen(dizi_2);
    
    if (strcmp(dizi_1, dizi_2) == 0)
        printf("girilen kelimeler aynı.\n");
    else
    {
        printf("girilen kelimeler aynı değil.\n");
        
        if (len_1 > len_2)
            printf("uzun olan kelime : %s\n", dizi_1);
        else if (len_1 < len_2)
            printf("uzun olan kelime : %s\n", dizi_2);
        else
            printf("eşit uzunluktalar.\n");
    }
    
    free(dizi_1);
    free(dizi_2);
    
    return 0;
}*/







/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char dizi[100];
    char aranan_kelime[50];
    
    fgets(dizi, sizeof(dizi), stdin);
    
    printf("girilen cümlede aramak istediğin kelimeyi gir: ");
    scanf("%s", aranan_kelime);

    char *ptr = dizi;
    int bulunan = 0;
    
    while ((ptr = strstr(ptr, aranan_kelime)) != NULL)
    {
        printf("Kelime \"%s\" cümlede bulundu, baslangic indis: %ld\n", aranan_kelime, ptr - dizi + 1);
        ptr++;
        bulunan = 1;
    }
       
    if (bulunan == 0)
        printf("Kelime \"%s\" cümlede bulunamadi.\n", aranan_kelime);
    
    return 0;
}*/







/*#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char metin[100];
    int harf_sayisi = 0;
    int kullanilan_harfler[26] = {0};

    printf("Metni giriniz: ");
    fgets(metin, sizeof(metin), stdin);
    
    int i;

    for (i = 0; metin[i] != '\n' && metin[i] != '\0'; i++)
    {
        if ((metin[i] >= 'a' && metin[i] <= 'z') || (metin[i] >= 'A' && metin[i] <= 'Z')) 
        {
            char harf = metin[i]; // Doğrudan karakteri kullanma
            
            if (harf >= 'A' && harf <= 'Z')
            {
                harf += ('a' - 'A'); // Büyük harfi küçük harfe dönüştürme
            }
            
            kullanilan_harfler[harf - 'a']++; // Harfin indeksini kullanarak sayaçları artırma
            harf_sayisi++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (kullanilan_harfler[i] > 0) 
        {
            printf("%c harfinden %d tane var.\n", 'a' + i, kullanilan_harfler[i]);
        }
    }

    return 0;
}*/









/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *cumle = NULL;
    size_t boyut = 0;
    int kelime_sayisi = 0, i;

    printf("Metni giriniz: ");
    getline(&cumle, &boyut, stdin); // Kullanıcıdan metni dinamik olarak alıyor
    
    for (i = 0; cumle[i] != '\0'; i++)
    {
        if (cumle[i] == ' ')
            kelime_sayisi++;
    }
    
    kelime_sayisi++;

    printf("Girilen metindeki kelime sayisi: %d\n", kelime_sayisi);

    free(cumle);

    return 0;
}*/










































































