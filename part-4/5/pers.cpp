#include<iostream>

int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);
const int ARR_SIZE = 10;
int main(void)
{
    using namespace std;
    
    double x[ARR_SIZE];
    int entries = fill_array(x, ARR_SIZE);

    cout << "iste ilk dizi:\n";
    show_array(x, entries);

    cout << "reverse edilmis dizi:\n";
    reverse_array(x, entries);
    show_array(x, entries);

    cout << "ilk ve son elemanlari sabit tutulup reverse edilmis dizi:\n";
    reverse_array(x + 1, entries - 2);
    show_array(x, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;

    int count = 0;
    cout << "en fazla " << size << " eleman girebilirsin.\n";
    cout << "enter #" << count + 1 << ": ";
    while(count < size && cin >> arr[count])
    {
        
        if(++count < size)
        cout << "enter #" << count + 1 << ": ";
        else
        {
            break;
        }
    }
    return count;
}
void show_array(const double arr[], int size)
{
    using namespace std;
    for(int i = 0; i < size; i++)
    {
        cout << "enter #" << i + 1 << " = " << arr[i] << endl;
    }
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
