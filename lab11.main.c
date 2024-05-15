//
//  main.c
//  pd2_lab11
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Öğrenci yapısı
struct ogrenci {
    int numara;
    char isim[20];
    int vize;
    int final;
    struct ogrenci *sonraki;
};

typedef struct ogrenci dugum;
dugum *head = NULL, *enBasarili = NULL;

// Yeni kayıt ekleme
dugum* kayit_ekleme(dugum *head) {
    int yeni_no;
    dugum *p, *q = NULL;
    dugum *yeni_ogrenci = (dugum*)malloc(sizeof(dugum));
    
    if (!yeni_ogrenci) {
        printf("Bellek ayırma başarısız!\n");
        return head;
    }

    printf("Yeni öğrencinin numarası : ");
    scanf("%d", &yeni_ogrenci->numara);
    getchar(); // newline karakterini temizle

    printf("Yeni öğrencinin adı: ");
    fgets(yeni_ogrenci->isim, sizeof(yeni_ogrenci->isim), stdin);
    yeni_ogrenci->isim[strcspn(yeni_ogrenci->isim, "\n")] = '\0'; // newline karakterini temizle

    printf("Yeni öğrencinin vize notu: ");
    scanf("%d", &yeni_ogrenci->vize);

    printf("Yeni öğrencinin final notu: ");
    scanf("%d", &yeni_ogrenci->final);

    printf("Listeye eklemek için 0'a basın: ");
    scanf("%d", &yeni_no);

    yeni_ogrenci->sonraki = NULL;

    if (head == NULL || head->numara == yeni_no) { // Başa ekleme
        yeni_ogrenci->sonraki = head;
        head = yeni_ogrenci;
    } else {
        p = head;
        while (p != NULL && p->numara != yeni_no) {
            q = p;
            p = p->sonraki;
        }
        if (p != NULL) { // Araya ekleme
            q->sonraki = yeni_ogrenci;
            yeni_ogrenci->sonraki = p;
        } else { // Sona ekleme
            q->sonraki = yeni_ogrenci;
        }
    }

    return head;
}

void kayit_listele(dugum* head) {
    if (head == NULL) {
        printf("Liste boş!\n");
        return;
    }

    int sayac = 1;
    dugum *p = head;

    while (p != NULL) {
        printf("%d- %d %s %d %d\n", sayac, p->numara, p->isim, p->vize, p->final);
        p = p->sonraki;
        sayac++;
    }
}

dugum* kayit_silme(dugum* head) {
    int kayit_no;
    dugum *p = head, *q = NULL;

    printf("Silmek istediğiniz öğrenci numarasını giriniz: ");
    scanf("%d", &kayit_no);

    if (p != NULL && p->numara == kayit_no) {
        head = p->sonraki;
        free(p);
    } else {
        while (p != NULL && p->numara != kayit_no) {
            q = p;
            p = p->sonraki;
        }
        if (p != NULL) {
            q->sonraki = p->sonraki;
            free(p);
        } else {
            printf("Silinecek öğrenci yok!\n");
        }
    }

    return head;
}

double ortalama_hesapla(dugum* head) {
    double toplam = 0;
    int sayac = 0;
    dugum *p = head;

    while (p != NULL) {
        toplam += (0.4 * p->vize) + (0.6 * p->final);
        p = p->sonraki;
        sayac++;
    }

    if (sayac == 0) {
        printf("Sınıfta hiç öğrenci yok!\n");
        return 0;
    }

    double ortalama = toplam / sayac;
    printf("Sınıfın ortalaması: %.2f\n", ortalama);

    return ortalama;
}

void en_basarili_ogrenci(void) {
    if (head == NULL) {
        printf("Liste boş!\n");
        return;
    }

    double basari_notu = 0, enYuksekBasariNotu = 0;
    dugum *p = head;
    enBasarili = p;

    while (p != NULL) {
        basari_notu = (0.4 * p->vize) + (0.6 * p->final);
        if (basari_notu > enYuksekBasariNotu) {
            enYuksekBasariNotu = basari_notu;
            enBasarili = p;
        }
        p = p->sonraki;
    }

    printf("En başarılı öğrenci:\n");
    printf("No: %d - Ad: %s - Başarı Notu: %.2f\n", enBasarili->numara, enBasarili->isim, enYuksekBasariNotu);
}

int main(void) {
    int secim;

    printf("1- Yeni Kayıt Ekleme\n2- Kayıt Listeleme\n3- Kayıt Silme\n4- Sınıf Ortalaması Hesaplama\n5- Ortalamaya Göre En Başarılı Öğrenciyi Bulma\n6- ÇIKIŞ\n");

    while (1) {
        printf("Seçim yap [1-6]: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1: head = kayit_ekleme(head);
                    kayit_listele(head);
                    break;
            case 2: kayit_listele(head);
                    break;
            case 3: head = kayit_silme(head);
                    kayit_listele(head);
                    break;
            case 4: ortalama_hesapla(head);
                    break;
            case 5: en_basarili_ogrenci();
                    break;
            case 6: exit(0);
            default: printf("Geçersiz seçim! Tekrar deneyin.\n");
        }
    }

    return 0;
}

















































