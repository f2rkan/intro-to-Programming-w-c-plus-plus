#include<iostream>

using namespace std;

int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

const int ARR_SIZE = 10;

int main(void)
{
    double arr[ARR_SIZE];
    int entries = fill_array(arr, ARR_SIZE);

    cout << endl << "here is the array: " << endl;
    show_array(arr, entries);
    
    cout << "let's reverse the array:\n";
    reverse_array(arr, entries);

    cout << "here is out new array:\n";
    show_array(arr, entries);

    cout << "let's reverse all except the first and last elements.\n";
    reverse_array(arr+1, entries-2);
    cout << "here is out final array:\n";
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    cout << "en fazla " << size << " deger girebilirsin." << endl;
    cout << "enter value number 1 (or type \"q\" when finished): ";
    int count = 0;

    while(count < size && cin >> arr[count])
    {
        if(++count < size)
        cout << "enter value number " << count + 1 << " or type \"q\" when finished: ";
    }
    return count;
}
void show_array(const double arr[], int size)
{
    cout << endl;
    for(int i = 0; i < size; i++)
    cout << "element number " << i + 1 << " = " << arr[i] << endl;
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
