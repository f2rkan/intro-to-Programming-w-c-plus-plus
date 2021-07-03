#include<iostream>
//cesitli gosterimler, aynı imzalar
//various notations, same signatures
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main(void)
{
    using namespace std;
    double av[3] = {1112.3, 1213.4, 123123.1};

    //pointer to a function
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2; //auto tur sonucu
    //yukarıdakinin yerine asagıdakini kullanabiliriz
    //const double *(*p2)(const double *, int) = f2;
    cout << "Using pointers to functions:\n";
    cout <<  " Address Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    //const double *(**pb)(const double *, int) = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " Address Value\n";
    for(int i = 0; i < 3; i++)
    cout << pa[i](av,3) << ": " << *pa[i](av, 3) << endl;
    cout << "\nusing a pointer to a pointer to a function:\n";
    cout << " Address Value\n";
    for(int i = 0; i < 3; i++)
    cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

    //bir fonksiyon pointerı dizisine pointer ne olacak?
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << " Address Value\n";
    //pc bildirmenin kolay yolu:
    auto pc = &pa;
    //const double *(*(*pc)[3])(const double *, int) = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    //pd bildirmenin uzun yolu
    const double *(*(*pd)[3])(const double *, int) = &pa;
    //dönüş değerini pdb'de sakla
    const double * pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    //alternatif gosterim:
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

    return 0;
}
//bazı donuk fonksiyonlar
const double * f1(const double * ar, int n)
{
    return ar;
}
const double * f2(const double ar[], int n)
{
    return ar+1;
}
const double * f3(const double ar[], int n)
{
    return ar+2;
}