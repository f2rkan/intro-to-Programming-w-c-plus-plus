#include<iostream>
#include<stdlib.h>

using namespace std;

/*kac sayi yazdirilacaksa kullanıcıdan
alıp, o kadar sayida bellekte dinamik olarak
yer ayırıp sonra bu sayıları yazdıran program*/

int main(void)
{
    //yazdırılacak sayilar i degiskeninde saklanır
    int i, n;

    //yazdırılacak sayıları tutacak olan dinamik bellek bölgesinin
    //baslangıc bolgesini isaret eden bir pointer tanımlanıyor

    int * p;

    cout << "kac tane sayi yazdiricaz: ";
    cin >> i;

    //kullanıcının girdigi sayiları tutmak icin
    //dinamik olarak bellekte yer ayrılıyor ve
    //sayıların tutulacagı bellek bolgesinin baslangıc adresi
    //p isaretcisine atanıyor

    p = new int[i];

    if(p == NULL)

    cout << "hata: bellek ayrilamadi" << endl;

    else
    {
        //kullanıcı kac tane sayi girecekse sırayla bu sayılar kullanıcıdan alınıyor
        for(n = 0; n < i; n++)
        {
            cout << "sayi giriniz: ";
            cin >> p[n];
        }
        cout << "girilen sayilar:";
        //kullanıcıdan alınarak saklanan sayılar
        //sırayla ekrana yazdırılıyor ve sayıları tutmak icin
        //ayrılan dinamik bellek bolgesi serbest bırakılıyor

        for(n = 0; n < i; n++)
        {
            cout << p[n];

        if(n != i - 1)
        cout << ", ";
        else
        
            cout << "";
        
        }

        delete[] p;
    }
}