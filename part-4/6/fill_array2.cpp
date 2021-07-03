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

    cout << "su anki dizi:\n";
    show_array(arr, entries);

    cout << "ters cevrilmis dizi:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "ilk ve son elemanlari sabit, diger elemanlari ters cevrilmis dizi:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;
    cout << "en fazla " << size << " eleman girisi yapabilirsin." << endl;
    cout << "elaman #1: ";

    int count = 0;
    while(count < size && cin >> arr[count])
    {
        if(++count < size)
        cout << "eleman #" << count + 1 << ": ";
    }
    return count;
}
void show_array(const double arr[], int size)
{
    using namespace std;
    int i = 0;
    while(i < size)
    {
        cout << "eleman #" << i + 1 << ": " << arr[i] << endl;
        i++;
    }
    return;
}
void reverse_array(double arr[], int size)
{
    int temp;
    int i = 0;
    while(i < size / 2)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1)- i];
        arr[(size - 1) - i] = temp;
        i++;
    }
    return;
}
