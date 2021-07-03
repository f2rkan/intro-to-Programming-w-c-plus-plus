#include<iostream>

template<typename T> //template A
T SumArray(T arr[], int n);

template<typename T> //template B
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main(void)
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 321, 123};
    struct debts mr_E[3] =
    {
        {"ali", 24000.00},
        {"veli", 1212.11},
        {"kirk", 1112.11}
    };

    double * pd[3];

    //mr_E icindeki yapıların uyelerine miktar belirleme
    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Toplam sayi:\n";
    
    //thigs bir int dizisi
    cout << SumArray(things, 6) << endl;
    
    cout << "mr_E debts toplamı:\n";
    //pd, double tipinde pointer dizisi
    cout << SumArray(pd, 3);
    cout << endl;

    return 0;
}
template<typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    
    return sum;
}
template<typename T>
T SumArray(T * arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += *arr[i];
    
    return sum;
}