//
//  main.c
//  pd2_lab12
//

/*struct ogrenci_bilgileri
{
    int numara;
    char isim[20];
    char bolum[40];
};

void liste_oluştur(void)
{
    struct ogrenci_bilgileri ogrenci;
    int sayi, n;
    
    FILE *myptr;
    
    if((myptr = fopen("dosya.txt", "w")) == NULL)
        printf("dosya açılamadı !\n");
    
    printf("kaç öğrenci bilgisi girilecek: ");
    scanf("%d", &sayi);
    
    for (n=0; n<sayi; n++)
    {
        printf("%d. öğrencinin numarası: ", n+1);
        scanf("%d", &ogrenci.numara);
        
        printf("%d. öğrencinin ismi: ", n+1);
        scanf("%s", ogrenci.isim);
        
        printf("%d. öğrencinin bölümü: ", n+1);
        scanf("%s", ogrenci.bolum);
        
        fprintf(myptr, "%d %s %s\n", ogrenci.numara, ogrenci.isim, ogrenci.bolum);
    }
    fclose(myptr);
}

void arama(void)
{
    struct ogrenci_bilgileri ogrenci;
    char ara_isim[20];
    char satir[200];
    
    FILE *myptr;
    if((myptr = fopen("dosya.txt", "r")) == NULL)
        printf("dosya açılamadı !\n");
    
    printf("arama yapmak istediğiniz ismi giriniz: ");
    scanf("%s", ara_isim);
    
    while (fgets(satir, sizeof(satir), myptr) != NULL) // satırı satır okur
    {
        sscanf(satir, "%d %19s %19s", &ogrenci.numara, ogrenci.isim, ogrenci.bolum);
        //öğrenci yapısının tüm alanları okunur
        if (strcmp(ara_isim, ogrenci.isim) == 0)
        {
            printf("aranan kişi bilgileri \n");
            printf("%d %s %s\n", ogrenci.numara, ogrenci.isim, ogrenci.bolum);
            printf("aranılan kişi bulundu ..\n");
            break;
        }
        printf("girilen isme ait kayıt bulunamadı ! \n");
    }
    fclose(myptr);
}


int main(void)
{
    int sec;
    
    printf("1-listeoluşturma\n2-arama\n3-çıkış\n");
    
    while (1)
    {
        printf("yapmak istediğiniz işlemi giriniz [1-3]: ");
        scanf("%d", &sec);
        
        switch (sec)
        {
            case 1:
                liste_oluştur();
                break;
            case 2:
                arama();
                break;
            case 3:
                exit(0);
                
            default:
                printf("geçersiz işlem girdiniz.. tekrar deneyiniz !\n");
                break;
        }
    }
    return 0;
}*/



















/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ogrenci_bilgileri{
    int numara;
    char isim[20];
    char bolum[50];
};

void liste_oluştur(void)
{
    struct ogrenci_bilgileri ogrenci;
    int sayi, n;
    
    FILE *myptr;
    
    if((myptr = fopen("dosya.txt", "wb")) == NULL)
        printf("dosya açılamadı !\n");
    
    printf("kaç öğrenci girişi yapılacak: ");
    scanf("%d", &sayi);
    
    for (n=0; n<sayi; n++)
    {
        printf("%d. öğrencinin numarası: ", n+1);
        scanf("%d", &ogrenci.numara);
        
        printf("%d. öğrencinin ismi: ", n+1);
        scanf("%s", ogrenci.isim);
        
        printf("%d. öğrencinin bölümü: ", n+1);
        scanf("%s", ogrenci.bolum);
        
        fwrite(&ogrenci, sizeof(struct ogrenci_bilgileri), 1, myptr);
    }
    fclose(myptr);
}

void arama(void)
{
    struct ogrenci_bilgileri ogrenci;
    
    FILE *myptr;
    if((myptr = fopen("dosya.txt","rb")) == NULL)
        printf("dosya açılamadı !\n");
    
    int ara_numara;
    int bulundu=0;
    
    printf("aramak istediğiniz kişinin numarasını giriniz: ");
    scanf("%d", &ara_numara);
    
    while (fread(&ogrenci, sizeof(struct ogrenci_bilgileri), 1, myptr) == 1)
    {
        if (ara_numara == ogrenci.numara)
        {
            printf("aranılan kişi bilgileri \n");
            printf("%d  %s  %s\n", ogrenci.numara, ogrenci.isim, ogrenci.bolum);
            bulundu = 1;
            break;
        }
    }
    if(!bulundu)
        printf("aranılan numara kaydı bulunamadı !\n");
    
    fclose(myptr);
}

int main(void)
{
    int sec;
    
    printf("1-Liste oluştur\n2-Arama\n3-Çıkış\n");
    
    while (1)
    {
        printf("yapmak istediğiniz işlemi giriniz [1-3]: ");
        scanf("%d", &sec);
        
        switch (sec)
        {
            case 1:
                liste_oluştur();
                break;
            case 2:
                arama();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("geçersiz işlem girdiniz ! tekrar deneyin\n");
                break;
        }
    }
    return 0;
}*/












/*void listele(void) {
    struct ogrenci_bilgileri ogrenci;

    FILE *myptr;
    if ((myptr = fopen("dosya.txt", "rb")) == NULL) {
        printf("Dosya açılamadı!\n");
        return;
    }

    printf("Öğrenci Listesi:\n");
    printf("Numara\tİsim\t\tBölüm\n");
    printf("------\t----\t\t-----\n");

    while (fread(&ogrenci, sizeof(struct ogrenci_bilgileri), 1, myptr) == 1) {
        printf("%d\t%s\t\t%s\n", ogrenci.numara, ogrenci.isim, ogrenci.bolum);
    }

    fclose(myptr);
}*/


