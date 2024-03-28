//
//  
//



/*#include <stdio.h>

int x=5;

int main(void){
    {
        int x=10, y=20;
        {
            printf("x= %d, y= %d\n", x, y);
            
            {
                int y=40;
                
                x++;
                y++;
                
                printf("x= %d, y= %d\n", x,y);
            }
            
            printf("x= %d, y= %d\n", x,y);
        }
    }
    
    printf("x= %d\n", x);
    
    return 0;
}*/









//deneme1.c
/*#include <stdio.h>

void fonk(void);

int gid =287;  //global int değişkeni tanımlaması

int main(void)
{
    printf("deneme1.c gid değişken değeri: %d\n", gid);
    
    fonk(); // deneme2.c dosyasındaki fonk() fonksiyonuna çağrı
    
    return 0;
}

//deneme2.c
extern int gid; //global int değişken bildirimi

void fonk (void)
{
    printf("deneme2.c gid değişken değeri: %d\n",gid);
}*/










/*#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start_t, end_t;
    register int id1, id2;
    
    start_t = clock();
    
    for (id1=0 ; id1<2000000 ; id1++) {
        for (id2=0 ; id2<100 ; id2++) { }
    }
    
    end_t = clock();
    
    printf("start_t değeri: %lu\n", start_t);
    printf("end_t değeri: %lu\n", end_t);
    printf("döngü çalışma süresi(saniye) : %.3f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC );
    
    return 0;
    
}*/








/*#include <stdio.h>

void fonk(void);
void fonk_sta(void);

int main(void)
{
    fonk();
    fonk_sta();
    
    printf("\n ");
    
    fonk();
    fonk_sta();
    
    return 0;
}

void fonk(void)
{
    int id =1 ;
    
    printf("fonk() id değişken değeri: %d\n", id);
    
    id = id + 21;
    
    printf("fonk() id değişken değeri: %d\n", id);
}

void fonk_sta(void)
{
    static int id=1; // sadece fonksiyonun ilk çağrısında çalışır.
    
    printf("fonk_sta() id değişken değeri: %d\n", id);
    
    id = id +21;
    
    printf("fonk_sta() id değişken değeri: %d\n", id);
}*/









/*#include <stdio.h>
#define pi 3.14

float yarıcap(float r ){
    float alan;
    
    alan= pi * r * r;
 
    return alan;
}

int main(void){
    float r;
    
    printf("yarıçapı giriniz: ");
    scanf("%f",&r);
    
    printf("dairenin alanı : %.2f\n ",yarıcap(r));
    
    return 0;
}*/






















