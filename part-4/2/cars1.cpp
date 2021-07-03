#include<iostream>
const double * f1(const double ar[], int n);
const double * f2(const double *, int);
const double * f3(const double * ar, int);
int main(void)
{
    using namespace std;
    double av[3] = {11.2, 12.3, 13.4};
    //bir fonksiyona pointer
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2; //easy way
    //const double * ( *p2)(const double *, int) = f2; //long way
    cout << "pointer kullanan fonksiyonlarin adresleri11:\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << " 22" << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << " 33" << endl;

    //pointerlara dizisi
    const double *(*pa[3])(const double *, int) = {f1,f2,f3};
    auto pb = pa;
    //ya da
    //const double *(**pb)(const double *, int) = pa;
    cout << "fonksiyonlara pointer dizisi kullanma:\n";
    for(int i = 0; i < 3; i++)
    cout << pa[i](av, 3) << ": " << *pa[i](av, 3) <<" 44 " << endl;

    //bir fonksiyon pointerına pointer kullanma
    auto pc = &pa; //easy way
    //const double *(*(*pc)[3])(const double *, int) = &pa;
    cout << (*pc)[3](av, 3) << ": " << *(*pc)[3](av,3) << " 55" << endl;

    //dönüş değerini pbd'de sakla
    const double *(*(*pd)[3])(const double *, int) = &pa;
    const double * pbd = (*pd)[1](av, 3);
    cout << pbd << ": " << * pbd << " 66" << endl;
    //a(lternatif gosterim:
    cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av, 3) << "77 "<< endl;

    return 0;
}
const double * f1(const double *ar, int n)
{
    return ar;
}
const double * f2(const double ar[], int n)
{
    return ar+1;
}
const double * f3(const double ar[], int n)
{
    return ar + 2;
}