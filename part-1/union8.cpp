#include<iostream>
#include<cstring>

using namespace std;

union deneme
{
    int integer;
    float decimal;
    char name[50];
};

int main(void)
{
    union deneme q;
    char qq[50];
    cin.getline(qq, 50);

    strcpy(q.name, qq);
    printf("union denemeleri:\n\nname: %s\n", q.name);
    int de; cin >> de;
    q.integer = de;
    printf("deger: %d\n", q.integer);
    float qqw;
    cin >> qqw;

    q.decimal = qqw;
    

    printf("decimal: %.3f\n", q.decimal);

    printf("sizeof(q): %d\n", sizeof(q));

    return 0;
}