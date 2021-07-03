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

    cout << endl << "iste dizi:\n";
    show_array(arr, entries);

    cout << "reverse array cagirildi.\n";
    reverse_array(arr, entries);
    cout << "iste yeni dizi:\n";
    show_array(arr, entries);
    cout << "ilk ve son elemanlar haric butun diziyi"
    " tersine cevirelim.\n";
    reverse_array(arr + 1, entries - 2);
    cout << "iste final dizimiz:\n";
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;
    cout << "en fazla " << size << " eleman girebilirsin\n";
    cout << "cikmak icin \"q\" tusuna bas:\n";
    
    int count = 0;
    while(count < size && cin >> arr[count])
    {
        if(++count < size)
        cout << "enter value #" << count + 1 << " (cikmak icin \"q\" tusuna bas): ";
    }
    return count;
}
void show_array(const double arr[], int size)
{
    using namespace std;
    cout << endl;
    for(int i = 0; i < size; i++)
    cout << "element number #" << i + 1 << " = " << arr[i] << endl;

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