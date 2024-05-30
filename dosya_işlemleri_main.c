/*
   ►Hasta takip sistemi
▪ Hasta no, adı, yaşı ve hastalık bilgisini tutacak
bir struct oluştur
▪ Belli sayıda hasta girişi yap.
▪ Dosya içerisinde hasta no’ya göre arama yap.
▪ Hasta kaydı sil
▪ Hasta kaydı düzenle.
▪ Dosyadan hastaları listele   */




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hasta_bilgileri
{
    int hastaNo;
    char isim[20];
    int yas;
    char hastalık_bilgisi[200];
};

void liste_olustur(void)
{
    struct hasta_bilgileri hasta;
    int sayi ,n;
    
    FILE *myptr;
    
    if ((myptr =fopen("dosya.txt", "w+"))== NULL)
        printf("dosya açılamadı!\n");
    
    printf("kaç hasta girişi alacaksınız: ");
    scanf("%d", &sayi);
    getchar();
            
    for (n=0; n<sayi; n++)
    {
        printf("%d. hastanın numarası: ", n+1);
        scanf("%d", &hasta.hastaNo);
        getchar();
        
        printf("%d. hastanın adı: ", n+1);
        scanf("%s", hasta.isim);
        
        printf("%d.hastanın yaşı: ", n+1);
        scanf("%d", &hasta.yas);
        getchar();
        
        printf("%d.hastanın hastalık bilgisi: ", n+1);
        fgets(hasta.hastalık_bilgisi, sizeof(hasta.hastalık_bilgisi), stdin);
        hasta.hastalık_bilgisi[ strcspn(hasta.hastalık_bilgisi, "\n")] = '\0';
        printf("\n");
        
        fwrite(&hasta, sizeof(struct hasta_bilgileri), 1, myptr);
    }
    fclose(myptr);
}


void arama(void)
{
    FILE *myptr;
    
    if ((myptr =fopen("dosya.txt", "rb"))== NULL)
        printf("dosya açılamadı!\n");
    
    struct hasta_bilgileri hasta;
    int numara;
    int bulundu=0;
    
    printf("aramak istediğiniz numarayı giriniz: ");
    scanf("%d", &numara);
    
    while (fread(&hasta, sizeof(struct hasta_bilgileri), 1, myptr) == 1)
    {
        if (numara == hasta.hastaNo)
        {
            printf("Hasta No: %d\n", hasta.hastaNo);
            printf("Hasta İsmi: %s\n", hasta.isim);
            printf("Hasta Yaşı: %d\n", hasta.yas);
            printf("Hastalık Bilgisi: %s\n", hasta.hastalık_bilgisi);
            printf("hasta bulundu \n");
            bulundu = 1;
            break;
        }
    }
    
    if (!bulundu)
        printf("hasta bulunamadı !\n");
    
    fclose(myptr);
}


void silme(void)
{
    struct hasta_bilgileri hasta;
    
    FILE *myptr, *gecici;
    
    if((myptr = fopen("dosya.txt", "rb")) == NULL)
        printf("dosya açılamadı ! ");
    if((gecici = fopen("gecici.txt", "wb")) == NULL)
        printf("dosya açılamadı !\n");
    
    int numara;
    int bulundu =0;
    
    printf("silinecek numarayı giriniz: ");
    scanf("%d", &numara);
    
    while (fread(&hasta, sizeof(struct hasta_bilgileri), 1, myptr) == 1)
    {
        if (hasta.hastaNo == numara)
        {
            printf("hasta kaydı siliniyor...\n");
            bulundu = 1;
        }
        else
            fwrite(&hasta, sizeof(struct hasta_bilgileri), 1, gecici);
    }
    fclose(myptr);
    fclose(gecici);
    
    if (bulundu)
    {
        remove("dosya.txt");
        rename("gecici.txt", "dosya.txt");
        printf("hasta başarıyla silindi! \n");
    }
    else
    {
        remove("gecici.txt");
        printf("hasta kaydı bulunamadı..\n");
    }
}


void kayıt_Guncelleme(void)
{
    struct hasta_bilgileri hasta;
    int numara;
    int bulundu = 0;
    
    FILE *myptr;
    if((myptr = fopen("dosya.txt", "r+")) == NULL)
    {
        printf("dosya açılamadı !\n");
        return;
    }
    
    printf("güncellemek istediğiniz kişinin numarasını giriniz: ");
    scanf("%d", &numara);
    getchar();
    
    while (fread(&hasta, sizeof(struct hasta_bilgileri), 1, myptr) == 1)
    {
        if (hasta.hastaNo == numara)
        {
            printf("Hasta Bilgileri:\n");
            printf("Hasta No: %d\n", hasta.hastaNo);
            printf("Hasta İsmi: %s\n", hasta.isim);
            printf("Hasta Yaşı: %d\n", hasta.yas);
            printf("Hastalık Bilgisi: %s\n", hasta.hastalık_bilgisi);
            
            printf("Yeni hastalık bilgisini giriniz: ");
            fgets(hasta.hastalık_bilgisi, sizeof(hasta.hastalık_bilgisi), stdin);
            hasta.hastalık_bilgisi[strcspn(hasta.hastalık_bilgisi, "\n")] = '\0';
            
            // Dosyadaki pozisyonu güncelleyip yeni bilgileri yazalım
            fseek(myptr, -sizeof(struct hasta_bilgileri), SEEK_CUR);
            fwrite(&hasta, sizeof(struct hasta_bilgileri), 1, myptr);
            bulundu = 1;
            break;
        }
    }
    
    if (!bulundu)
    {
        printf("%d numaralı hasta bulunamadı.\n", numara);
    }
    else
    {
        printf("Hasta bilgileri başarıyla güncellendi!\n");
    }

    fclose(myptr);
}


void listeleme(void)
{
    struct hasta_bilgileri hasta = {0, "", 0, ""};
    
    FILE *myptr;
    
    if((myptr = fopen("dosya.txt", "rb")) == NULL)
        printf("dosya açılamadı !\n");
    
    printf("%-10s%-16s%-11s%10s\n", "HastaNo", "isim", "yaş", "hastalık bilgisi");
    
    while(fread(&hasta, sizeof(struct hasta_bilgileri), 1, myptr) == 1 )
    {
        if (hasta.hastaNo != 0)
        {
            printf("%-10d%-16s%-11d%10s\n", hasta.hastaNo, hasta.isim, hasta.yas, hasta.hastalık_bilgisi);
        }
    }
    getchar();
}


int main(void)
{
    int sec;
    printf("1-liste oluştur\n2-listede numara ile arama yap\n3-silme\n4-kayıt güncelleme\n5-listeyi göster\n6-çıkış\n");
    
    while(1)
    {
        printf("yapmak istediğiniz işlemi seçin [1-6] ? ");
        scanf("%d", &sec);
        
        switch (sec)
        {
            case 1:
                liste_olustur();
                break;
            case 2:
                arama();
                break;
            case 3:
                silme();
                listeleme();
                break;
            case 4:
                kayıt_Guncelleme();
                listeleme();
                break;
            case 5:
                listeleme();
                break;
            case 6:
                exit(0);
                    
            default:
                printf("geçersiz işlem seçtiniz !\n");
                break;
        }
    }
    return 0;
}
    











































































