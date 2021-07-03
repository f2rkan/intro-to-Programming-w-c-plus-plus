#include<iostream>

const int arr_size = 10;

int fill_array(double *, int);
void show_array(const double *, int);
void reverse_array(double *, int);

int main(void)
{
    using namespace std;

    double arr[arr_size];
    int entries = fill_array(arr, arr_size);

    cout << "girdigin dizi:\n";
    show_array(arr, entries);

    cout << "reversed array:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "ilk ve son elemanlari sabit; kalani ters:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int Size)
{
    using namespace std;

    cout << "en fazla " << Size << " eleman girebilirsin.\n";
    int count = 0;
    cout << "eleman #" << count + 1 << ": ";

    while(count < Size && cin >> arr[count])
    {
        if(++count < Size)
            cout << "eleman #" << count + 1 << ": ";
    } 

    return count;
}
void show_array(const double arr[], int Size)
{
    using namespace std;

    int i = 0;
    while(i < Size)
    {
        cout << "eleman #" << i + 1 << ": " << arr[i];
        cout << endl;
        i++;
    }
    return;
}
void reverse_array(double arr[], int Size)
{
    int temp;
    int i = 0;
    while(i++ < Size / 2)
    {
        temp = arr[i];
        arr[i] = arr[(Size - 1) - i];
        arr[(Size - 1) - i] = temp;
    }

    return;
}