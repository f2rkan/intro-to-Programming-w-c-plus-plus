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

    cout << endl << "girdigin dizi:\n";
    show_array(arr, entries);

    cout << "tersine cevrilmis dizi:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "ilk ve son elemanlari sabit, kalani tersine cevrilmis dizi:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int Max)
{
    using namespace std;
    cout << "en fazla " << Max << " eleman girebilirsin." << endl;

    int count = 0;
    cout << "elaman #" << count + 1 << ": ";

    while(count < Max && cin >> arr[count])
    {
        
        if(++count < Max)
            cout << "eleman #" << count + 1 << ": ";
    }

    return count;
}
void show_array(const double arr[], int Max)
{
    using namespace std;
    int i = 0;

    while(i++ < Max)
    {
        cout << "eleman #" << i + 1 << arr[i] << endl;
    }

    return;
}
void reverse_array(double arr[], int Max)
{
    int temp;

    for(int i = 0; i < Max / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(Max - 1) - i];
        arr[(Max - 1) - i] = temp;
    }

    return;
}