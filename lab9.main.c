//
//  main.c
//  pd2_lab9
//
//

/*#include <stdio.h>
#include <stdlib.h>

int main(void){
    int Arr[] = {10, 5, 4, 12};
    int *Ap = Arr;
    int **App = &Ap;
    
    printf("output1= %d\n", Ap[2]);
    
    App++;
    printf("output2= %d\n", *(Ap+2));
    printf("output3= %d\n", Ap+1);
    
    (*App)++;
    printf("output4= %d\n", (int**)App);
    
    Ap = Ap -2;
    printf("output5= %d\n", (int*)App);
    
    return 0;
}*/









/*#include <stdio.h>

float harmonicSeries(int n) 
{
    if (n == 1)
        return 1.0;
    else
        return 1.0 / n + harmonicSeries(n - 1);
}

int main(void)
{
    int n;
    printf("Harmonik serinin ilk n terimini hesaplamak için n değerini girin: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Geçersiz giriş. n pozitif bir tamsayı olmalıdır.\n");
        return 1;
    }

    printf("Harmonik serinin ilk %d terimi: \n", n);
    for (int i = 1; i <= n; i++) {
        printf("%.2f ", harmonicSeries(i));
    }

    printf("\n");

    return 0;
}*/









/*#include <stdio.h>
#include <stdlib.h>

void basamaklaraAyir(long num) 
{
    int tekDizi[10] = {0};
    int ciftDizi[10] = {0};

    // Sayıyı basamaklarına ayırma ve uygun diziye ekleyerek işlemi gerçekleştirme
    while (num > 0) 
    {
        int rakam = num % 10;
        
        if (rakam % 2 == 0)
            ciftDizi[rakam]++;
        else
            tekDizi[rakam]++;
        
        num /= 10;
    }

    printf("Tek sayilar: ");
    for (int i = 0; i < 10; i++) 
    {
        if (tekDizi[i] > 0)
            printf("%d ", i);
    }
    printf("\n");

    
    printf("Cift sayilar: ");
    for (int i = 0; i < 10; i++) 
    {
        if (ciftDizi[i] > 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main(void) 
{
    long numara;
    printf("Ogrenci numaranizi girin: ");
    scanf("%ld", &numara);

    if (numara <= 0) 
    {
        printf("Geçersiz giriş. Lütfen pozitif bir tamsayı girin.\n");
        return 1;
    }

    basamaklaraAyir(numara);

    return 0;
}*/









/*#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int *fonk(char *p, int k)
{
    char *t=(char*)malloc(sizeof(char)), *s;
    s=p;
    int i=0;
    
    for(i = 0; *(p+i) != '\0'; ++i)
    {
        s = *(p+i);
        
        if(s >= '0' && s <= '9')
        {
            s +=k;
            
            if(s > '9')
            {
                s = s - '9' + '0' - 1;
            }
            
            *(t+i) = s;
        }
    }
    return t;
}

int main(void)
{
    char p[100],*s;
    int k;
    printf("Number=");
    scanf("%s", p);
    
    printf("Key=");
    scanf("%d",&k);
    
    s=fonk(p,k);
    
    puts(s);
    
    free(s);
    
    return 0;
}*/



