//
//
//




/*int main (void)
{
    int i=5;
    int *iptr;
    iptr = &i;
    
    printf("i adresi   %p\n", &i);      // random değer basıyor
    printf("iptr değeri: %p\n", iptr);  // random değer basıyor
    
    printf("i değeri  %d\n", i);           // 5 değerini basıyor
    printf("*iptr değeri %d\n", *iptr);    // 5 değerini basıyor
    printf("i nin değeri %d\n", *(&i));    // 5 değerini basıyor
    
    printf("iptr değeri: %p\n", &iptr);  // random değer veriyor
    
    getchar();
    return 0;
}*/









/*int main(void)
{
    int x, y, z;
    int sum;
   
    int *int_addr;
    x=5;
    y=6;
   
    int_addr = &x;
    z= *int_addr;
    
    sum=z;
    
    int_addr = &y;
    z= *int_addr;
   
    sum = sum + z;
    printf("toplam : %d\n", sum);
   
    return 0;
}*/









/*#include <stdio.h>

int main(void)
{
    int dizi[5];
    int i;
     
    for (i=0; i<5; i++)
    {
        printf("%d.sayıyı girin : ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("\n");
    
    int *iptr =dizi;
 
    
    for (i=0; i<5; i++)
    {
        printf("%d.sayı: %d\n", i+1, iptr[i]);
    }
    
    return 0;
}*/









/*#include <stdio.h>

int main(void)
{
    char str[200];
    int k=0;
    
    printf("stringi giriniz: ");
    fgets(str, sizeof(str), stdin);
    
    char *sptr = str;
    
    while (sptr[k] !='\0')
        k++;
    
    printf("girilen stringin uzunluğu: %d\n", k-1);
    
    return 0;
}*/









/*#include <stdio.h>

int main(void)
{
    int x=5, y=6, z=7;
    int *int_addr;
    
    int_addr = &x;
    printf("element 1= %d\n", *int_addr);
    
    int_addr = &y;
    printf("element 2= %d\n", *int_addr);
    
    int_addr = &z;
    printf("element 3= %d\n\n", *int_addr);
    
    printf("element 1= %d\n", *int_addr);
    
    int_addr = &y;
    printf("element 2= %d\n", *int_addr);
    
    int_addr = &x;
    printf("element 3= %d\n", *int_addr);
    
    return 0;
}*/









/*#include <stdio.h>

int main(void)
{
    int dizi[10];
    int n,i;
    
    printf("hesaplanacak dizinin eleman sayısını giriniz(max 10): ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        printf("%d. sayı: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    int sum=0;
    int *iptr=dizi;
    
    for (i=0; i<n; i++)
    {
        sum = sum + iptr[i];               // *(iptr + i) yazsanda olurdu, aynı şeyler
    }
    
    printf("%d elemanlı dizinin elemanları toplamı: %d\n", n, sum);
    
    return 0;
}*/









/*#include <stdio.h>

int main(void)
{
    char str[200];
    int n=0;
    
    printf("stringi giriniz: ");
    fgets(str, sizeof(str), stdin);
    
    for (n=0; str[n]!='\0'; n++);
    
    if (n > 0 && str[n-1] == '\n') {         // yeni satıra geçmeyi engelliyor
           str[n-1] = '\0';
           n--;
       }
    
    char *sptr = str;
    int gecici,i;
    
    for (i=0; i<n/2; i++)
    {
        gecici= sptr[n-i-1];
        sptr[n-i-1]= sptr[i];
        sptr[i]= gecici;
    }
    
    printf("girilen stringin tersi: %s\n", sptr);
   
    return 0;
}*/























































