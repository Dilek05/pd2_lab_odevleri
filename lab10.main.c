//
//  main.c
//  pd2_lab10
//
//




/*#include <stdio.h>

enum day {sunday =1, tuesday, wednesday, thursday,friday, saturday};

int main(void){
    enum day d = thursday;
    printf("the day number stored in d is %d\n",d);
    return 0;
}*/

//output: the day number stored in d is 4







/*#include <stdio.h>

enum State {WORKING =0, FAILED, FREEZED};
enum State currState =2;

enum State FindState(void)
{
    return currState;
}

int main(void){
    (FindState()== WORKING)?  printf("working\n"): printf("not working\n");
    return 0;
}*/

//output: not working







/*#include <stdio.h>

int main(void){
    enum result {pass, fail};
    enum result s1, s2;
    
    s1= pass;
    s2= fail;
    printf("%d\n",s1);
   
}*/

//output: 0







/*#include <stdio.h>

enum example { a=1, b,c};
enum example example1 =2;
enum example answer(void){
    return example1;
}

int main(void)
{
    (answer() == a)? printf("yes\n"): printf("no\n");
    return 0;
}*/

//output: no




/*#include <stdio.h>
#define MAX 4

enum sanfoundry{
    a, b=3, c
};

int main(void){
    if (MAX != c)
        printf("hello\n");
    else
        printf("welcome\n");
}*/

//output: welcome







/*#include <stdio.h>

enum sanfoundry {
    a, b, c
};

enum sanfoundry g;
 
int main (void){
    g++;
    printf("%d\n", g);
}*/

//output: 1





/*#include <stdio.h>

enum day{
    a, b, c=5, d, e
};
int main(void){
    printf("enter the value for a: ");
    scanf("%d", a);
    
    printf("%d", a);
}*/

//output: error









/*#include <stdio.h>

enum sanfoundry {
    c = 0,
    d = 10,
    h = 20,
    s = 3,
}a;

int main(void){
    a = c;
    printf("size of enum variable = %lu bytes\n", sizeof(a));

    return 0;
}*/

//output: size of enum variable = 4 bytes









/*#include <stdio.h>

enum sanfoundry{
    a=1, b, c, d, e,
};
int main(void){
    printf("%d\n", b*c+e-d);
}*/

//output: 7








/*#include <stdio.h>

enum sanfoundry{
    a, b, c=5
};
int main(void){
    enum sanfoundry s;
    b=10;   // enum sabitlerine değer atanmaz.
    printf("%d", b);
}*/

//output: error









/*#include <stdio.h>
enum sanfoundry{
    a=1, b
};
enum sanfoundry1{
   c, d
};
int main(void){
    enum sanfoundry1 s1 = c;
    enum sanfoundry1 s = a;
    enum sanfoundry s2 = d;
 
    printf("%d ", s);
    printf("%d ", s1);
    printf("%d ", s2);
}*/

//output: 1 0 1
          
        







/*#include <stdio.h>

int main(void)
{
    struct student{
        long number;
        char name[40];
        char surname[40];
        int midtermGrade;
    };
    
    struct student person[10];
    
    int i;
    
    for (i=0; i<3; i++) {
        
        printf(" %d. öğrencinin bilgilerini giriniz \n", i+1);
        
        printf("number: ");
        scanf("%lu", &person[i].number);
        
        printf("name: ");
        scanf("%s", person[i].name);
        
        printf("surname:");
        scanf("%s", person[i].surname);
        
        printf("midterm grade:");
        scanf("%d", &person[i].midtermGrade);
        
        printf("\n");
    }
    
    for (i=0; i<3; i++)
    {
        printf(" %d. öğrencinin bilgileri \n", i+1);
        printf("number: %lu\n", person[i].number);
        printf("name: %s\n", person[i].name);
        printf("surname: %s\n", person[i].surname);
        printf("midterm grade: %d\n", person[i].midtermGrade);
        
        printf("\n");
    }
    
    return 0;
}*/









/*#include <stdio.h>
#include <string.h>

struct books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printbook( struct books book )
{
    printf("book title: %s\n", book.title);
    printf("book author: %s\n", book.author);
    printf("book subject: %s\n", book.subject);
    printf("book book_id: %d\n", book.book_id);
    printf("\n");
}

int main(void){
    struct books book1;
    struct books book2;
    
    strcpy(book1.title, "c programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "c programming tutorial");
    book1.book_id = 6495407;
    
    strcpy(book2.title, "telecom billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "telecom billing tutorial");
    book2.book_id = 6495700;
    
    printbook( book1 );
    printbook( book2 );
    
    return 0;
}*/









/*#include <stdio.h>
#include <stdlib.h>

struct person{
    int age;
    float weight;
    char name[30];
};

int main(void){
    struct person *ptr;
    int i, n;
    
    printf("enter the number of persons: ");
    scanf("%d", &n);
    
    ptr = (struct person* )malloc(n*sizeof(struct person));
    
    for (i=0; i<n; i++)
    {
        printf("enter first name and age respectively: ");
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }
    
    printf("displaying information: \n");
    for (i=0; i<n; i++)
        printf("name: %s \tage: %d\n", (ptr + i)->name, (ptr + i)->age);
    
    return 0;
}*/

/*output: displaying information:
          name:     age:
          name:     age:
*/


 
 
 
 
 

 
/*#include <stdio.h>
#include <string.h>

struct player {
    char pname[20];
}pl;

char * play(struct player *temp_pl)
{
    strcpy( temp_pl->pname, "kohli");
    
    return temp_pl->pname;
}

int main(void)
{
    strcpy(pl.pname, "dhoni");
    printf("%s %s\n", pl.pname, play(&pl));
  
 return 0;
}*/

//output: kohli kohli









/*#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

void display(struct student s);

int main(void){
    struct student s1;
    
    printf("enter name: ");
    scanf("%s", s1.name);
    
    printf("enter age: ");
    scanf("%d", &s1.age);
    
    display(s1);
}

void display(struct student s)
{
    printf("\ndisplay information\n");
    printf("name: %s\n", s.name);
    printf("age: %d\n", s.age);
}*/

/* output: display information
           name: dilek
           age: 21
*/








/*#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

struct student getInformation(void);

int main(void)
{
    struct student s;
    
    s = getInformation();
    
    printf("\ndisplay information\n");
    printf("name: %s\n", s.name);
    printf("age: %d\n", s.age);
    
    return 0;
}

struct student getInformation(void)
{
    struct student s1;
    
    printf("enter name: ");
    scanf("%[^\n]%*c", s1.name);
    
    printf("enter age: ");
    scanf("%d", &s1.age);
    
    return s1;
}*/

/* output: display information
           name: dilek
           age: 21
*/









/*#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;

void addNumbers(complex c1, complex c2, complex *result);

int main(void)
{
    complex c1, c2, result;
    
    printf("for first number, \n");
    printf("enter real part: ");
    scanf("%f", &c1.real);
    printf("enter imaginary part: ");
    scanf("%f", &c1.imag);
    
    printf("for second number, \n");
    printf("enter real part: ");
    scanf("%f", &c2.real);
    printf("enter imaginary part: ");
    scanf("%f", &c2.imag);
    
    addNumbers(c1, c2, &result);
    
    printf("\nresult.real = %.1f\n", result.real);
    printf("result.imag = %.1f\n", result.imag);
    
    return 0;
}

void addNumbers(complex c1, complex c2, complex *result)
{
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}*/

/* output:  result.real =
            result.imag =
*/

















