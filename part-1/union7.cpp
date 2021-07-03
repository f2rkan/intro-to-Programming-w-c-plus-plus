#include<stdio.h>
#include<string.h>
#include<cstring>

using namespace std;



struct Yapi_Ornek
{
    int integer;
    float decimal;
    char name[20];
};
union ornek
{
    int integer;
    float decimal;
    char name[20];
};

int main(void)
{
    struct Yapi_Ornek s = {22, 45.5, "ISTE - bm"};
    union ornek q;    

    printf("structure degerleri:\ninteger:%d\ndecimal:%.f\nname:%s\n", s.integer, s.decimal, s.name);

    printf("\nstructure boyutu: %d\n", sizeof(s));
    s.integer = 1453;
    s.decimal = 78;
    strcpy(s.name, "ISTE-TEKNOLOJI");

    printf("structure degerleri:\ninteger:%d\ndecimal:%.2f\nname:%s\n", s.integer, s.decimal, s.name);

    printf("-------\n\n\n");
    
    q.integer = 11;
    printf("union denemesi:\ninteger: %d\n", q.integer);
    q.decimal = 477.85;
    printf("decimal: %.2f\n", q.decimal);
    strcpy(q.name, "deneme union");
    printf("name: %s\n", q.name);

    printf("union boyutu:%d\n", sizeof(q));

 
    return 0;
}