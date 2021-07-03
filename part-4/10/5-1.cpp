#include<iostream>

int fill_array(double *, int);
void show_array(const double *, int);
void reverse_array(double *, int);

const int arr_size = 10;

int main(void)
{
    using namespace std;

    double arr[arr_size];
    int entries = fill_array(arr, arr_size);

    cout << endl << "olusturdugun dizi:\n";
    show_array(arr, entries);

    cout << "dizinin terse donmus hali:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "dizinin ilk ve son elemanlari aynı, kalanı ters:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int Size)
{
    using namespace std;
    cout << "en fazla " << Size << " eleman girebilirsin." << endl;
    int count = 0;
    cout << "eleman #" << count + 1 << ": ";

    while(count < Size && cin >> arr[count]) //slick use of cin
    {
        if(++count < Size)
            cout << "eleman #" << count + 1 << ": ";
    }

    return count;
}
void show_array(const double arr[], int Size)
{
    using namespace std;
    for(int i = 0; i < Size; i++)
    {
        cout << "eleman #" << i + 1 << ": " << arr[i] << endl;
    }

    return;
}
void reverse_array(double arr[], int Size)
{
    int temp;
    for(int i = 0; i < Size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(Size - 1) - i];
        arr[(Size - 1) - i] = temp;
    }

    return;
}