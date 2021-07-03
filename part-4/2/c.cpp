#include<iostream>
const double * f1(const double *, int);
const double * f2(const double ar[], int n);
const double * f3(const double [], int);

int main(void)
{
    using namespace std;
    double av[3] = {1.2, 2.3, 4.5};
    //pointer to a function:
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    //ya da
    //const double *(*p2)(const double *, int) = f2;
    cout << "fonksiyonlarin pointerlari:\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    //pa, bir pointer dizisi:
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    //pa bir pointer dizisi oldugu icin auto komutunu kullanamayiz; fakat
    //pa'nın ilk elemanına bir pointer tanımlayabiliriz:
    const double *(**pq)(const double *, int) = pa;
    //auto pq = pa;
    cout << "pointer dizisi:\n";
    for(int i = 0; i < 3; i++)
    cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    cout << "pointer dizisine isaret eden pointer:\n";
    for(int i = 0; i < 3; i++)
    cout << pq[i](av, 3) << ": " << *pq[i](av, 3) << endl;
    //pointer dizisine pointer;
    const double *(*(*pd)[3])(const double *, int) = &pa;
    cout << "pointer dizisine isaret eden pointer:\n";
    cout << (*(*pd)[0])(av, 3) << ": " << *(*(*pd)[0])(av, 3) << endl;
    //bir baska pointer dizisine isaret eden pointer:
    auto pr = &pa;
    //return degeri pda'da donsun:
    const double * pda = (*pr)[1](av, 3);
    cout << "return degeri:\n";
    cout << pda << ": " << *pda << endl;
    //alternatif gosterim:
    cout << "alternatif baski:\n";
    cout << (*(*pr)[2])(av, 3) << ": " << *(*(*pr)[2])(av, 3) << endl;
    
    //calisma::
    cout << "calisma:\n\n\n";
    const double *(*(*(*pc1)))(const double *, int) = pr;
    cout << (*(*(pc1)[2]))(av, 3) << ": " << *(*(*(*pc1)[2]))(av, 3) << endl;

    return 0;
}
const double * f1(const double *ar, int n)
{
    return ar;
}
const double * f2(const double ar[], int n)
{
    return ar + 1;
}
const double * f3(const double ar[], int n)
{
    return ar + 2;
}