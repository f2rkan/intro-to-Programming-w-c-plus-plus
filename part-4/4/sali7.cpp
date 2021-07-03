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

    cout << "iste dizimiz.\n";
    show_array(arr, entries);

    cout << "tersine donmus dizimiz.\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "son ve ilk elemanlari haric tekrar "
    "tersine donmus dizimiz.\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;
    cout << "en fazla " << size << " eleman girebilirsin "
    "(\"q\" to quit): ";
    int count = 0;

    while(count < size && cin >> arr[count])
    {
        if(++count < size)
        cout << "enter #" << count + 1 << ": ";
    }
    return count;
}
void show_array(const double arr[], int size)
{
    using namespace std;
    for(int i = 0; i < size; i++)
    cout << "value #" << i + 1 << ": " << arr[i] << endl;

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