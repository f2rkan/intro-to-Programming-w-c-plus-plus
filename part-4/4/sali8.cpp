#include<iostream>

int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

const int ARR_SIZE = 10;

int main(void)
{
    using namespace std;
    double arr[ARR_SIZE];
    int entries = fill_array(arr, ARR_SIZE);

    cout << "mevcut dizimiz:\n";
    show_array(arr, entries);

    cout << "tersine cevrilmis haliyle dizimis:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "son ve ilk elemanlari sabit tutulmus haliyle tekrar tersine cevrilmis dizimiz:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;
    cout << "en fazla " << size << " eleman girisi yapabilirsin. " << "(girisi bitirmek icin \"q\" tusuna bas): ";
    int count = 0;
    while(count < size && cin >> arr[count])
    {
        if(++count < size)
        cout << "enter #" << count + 1 << " value: ";
    }
    return count;
}
void show_array(const double arr[], int size)
{
    using namespace std;
    for(int i = 0; i < size; i++)
    cout << "eleman #" << i + 1 << ": " << arr[i] << endl;

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