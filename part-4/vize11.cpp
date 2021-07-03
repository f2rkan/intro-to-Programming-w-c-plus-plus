#include<iostream>

using namespace std;

int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

const int arr_size = 10;

int main(void)
{
    double arr[arr_size];
    int entries = fill_array(arr, arr_size);

    cout << endl << "iste dizi:" << endl;
    show_array(arr, entries);

    cout << "ters cevrilmis dizi:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "ilk ve son elemanlari ayni, kalani ters:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);


    return 0;
}

int fill_array(double arr[], int size)
{
    cout << "en fazla " << size << " giris yapabilirsin\n";
    cout << "enter value #1 (q to quit): ";

    int count = 0;

    while(count < size && cin >> arr[count])
    {
        if(++count < size)
            cout <<"enter value #" << count + 1 << ": ";
    }

    return count;
}

void show_array(const double arr[], int size)
{
    cout << endl;
    for(int i = 0; i < size; i++)
        cout << "element number " << i + 1 << ": " << arr[i] << endl;
    
    cout << endl;

    return;
}

void reverse_array(double arr[], int size)
{
    int temp;
    for(int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }

  return;
}