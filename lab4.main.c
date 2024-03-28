//
//
//



/*#include <stdio.h>

void fun(int n, int a, int b)
{
    if (n >= 10)
        return;

    fun(n + 2, a, n + b);
    printf("%d %d %d \n", n, a, b);
}

int main(void)
{
    int n = 0, a = 5, b = 7;

    fun(n, a, b);

    //printf("sonuc: %d", fun(n, a, b));

    return 0;
}*/









/*#include <stdio.h>

int tekSayi(int dizi[ ],int n)
{
    if (n<1)
        return 0 ;
    
    if (dizi[ n-1]%2==1)
        return 1 + tekSayi(dizi, n-1);
    
    return 0 + tekSayi(dizi, n-1);
}

int main(void)
{
    int dizi[ ]={1,2,3,4,5};
    
    printf("%d\n", tekSayi(dizi, 5));
    
    return 0;
 }*/









/*#include <stdio.h>

int fun(int n)
{
    if (n==4)
        return n;
    else
        return 2 * fun(n+1);
}

int main(void)
{
    printf("%d\n", fun(2));
    
    return 0;
}*/









/*#include <stdio.h>

int toplam(int n)
{
    if(n==1)
        return n;
    else
        return (n+toplam(n-1));
}

int main (void)
{
    int sayi=6;
    printf("sonuç = %d\n", toplam(sayi));
    return 0;
}*/









/*#include <stdio.h>

void my_recursive_func(int n)
{
    if(n==0)
        return;
    
    printf("%d ", n);
    my_recursive_func(n-1);
}

int main(void)
{
    my_recursive_func(7);
    
    printf("\n");
    
    return 0;
}*/









/*#include <stdio.h>

void fun(int n)
{
    if(n==0)
        return;
    
    fun(n/2);
    printf("%d ", n % 2);
}

int main(void)
{
    fun(25);
    
    return 0;
}*/









/*#include <stdio.h>

int recursive_bas_top(int n)
{
    if(n==0)
        return 0;
    return n % 10 + recursive_bas_top(n/10);
}

int main(void)
{
    int n =1201;
    int ans= recursive_bas_top(n);
    
    printf("%d\n", ans);
    
    return 0;
}*/









/*#include <stdio.h>

char f1(int b);

int main(void)
{
    char a;
    a=f1(10);
    printf("%c", a);
    
    return 0;
}

char f1(int b)
{
    printf("a ");
    
    if(b <= 8)
        return 'a';
    else
    {
        printf("a ");
        f1(b--);
    }
}*/
//sonsuz döngüye giriyor

























































































































