/*asagıdaki fonksiyonları kullnana bir program yaz:

a. fill_array(); argüman olarak bir double değerli dizinin adını ve dizinin boyutunu alır; kullanıcıdan diziye gecirilecek double
degerleri girmesini ister; dizi doldugunda veya kullanıcı sayısal olmayan giriş yaptıgında giriş almayı durdurur ve gerçek girdi
sayısını dondurur.

b. show_array(); argüman olarak double değerli bir dizi adı ve bir dizi boyutu alır ve dizinin içeriğini döndürür.

c. reverse_array(); argüman olarak bir double değer dizisi ve bir dizi boyutunu alır; dizide saklanan değerleri tersine cevirir.


--program, diziyi doldurmak, diziyi gostermek, diziyi tersine cevirmek, diziyi gostermek, dizinin ilk ve son ogeleri dısındaki 
tum ogeleri tersine cevirmek ve sonra diziyi gostermek icin bu fonksiyonları kullanacaktır.*/

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

    cout << "olusturdugun dizi:\n";
    show_array(arr, entries);
    
    cout << "tersine dondurulen dizi:\n";
    reverse_array(arr, entries);
    show_array(arr, entries);

    cout << "ilk ve son elemanlar sabit halde tersine cevrilen dizi:\n";
    reverse_array(arr + 1, entries - 2);
    show_array(arr, entries);

    return 0;
}
int fill_array(double arr[], int size)
{
    using namespace std;
    cout << "en fazla " << size << " eleman girisi yapabilirsin.\n";
    int count = 0;
    cout << "enter #1: ";
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
    cout << "eleman " << i + 1 << ": " << arr[i] << endl;

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