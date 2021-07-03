#include<iostream>

template<typename T>
T max5(T arr[]);

int main(void)
{
    using namespace std;

    cout << "5 deger gir (s to skip): ";
    int i1, i2, i3, i4, i5;
    
    if(cin >> i1 >> i2 >> i3 >> i4 >> i5)
    {
        int arri[5] = {i1, i2, i3, i4, i5};
        int maxi = max5(arri);
        cout << "en buyuk deger " << maxi << endl;
    }
    
    cout << "5 double degeri gir (s to skip): ";
    double d1, d2, d3, d4, d5;

    if(cin >> d1 >> d2 >> d3 >> d4 >> d5)
    {
        double arrd[5] = {d1, d2, d3, d4, d5};
        double maxd = max5(arrd);
        cout << "en buyuk deger " << maxd << endl;
    }

    cout << "Bye." << endl;

    return 0;
}
template<typename T>

T max5(T arr[])
{
    T max = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}