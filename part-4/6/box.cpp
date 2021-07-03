/*box structure'ı asagıdaki gibidir:
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

a) her üyenin icerigini doldur ve sonra bu icerikleri bas
b) structure'ın bir üyesinin adresini geçir ve volume üyesini diger 3 uyenin carpımına esitle
c) bu iki fonksiyonu kullanan basit bir program yaz
*/

#include<iostream>

struct box
{
    char maker[40];
    float length;
    float height;
    float width;
    float volume;
};

//function prototypes
void displayStructure(box x);
void setVolume(box * y);

int main(void)
{
    using namespace std;
    cout << "enter the maker: ";
    box myBox;
    
    cin.get(myBox.maker, 40);

    while(cin.get() != '\n')
    continue;

    cout << "enter the height: ";
    cin >> myBox.height;
    cout << "enter the width: ";
    cin >> myBox.width;
    cout << "enter the length: ";
    cin >> myBox.length;
    cout << "enter the volume: ";
    cin >> myBox.volume;

    //myBox icerigini goruntule
    cout << endl << "bunlari girdin:\n";

    //volume diger 3 üyenin carpımı degilse esitle
    if(myBox.volume != myBox.length * myBox.height * myBox.width)
    {
        cout << endl << "volume diger boyutlarla eslesmiyor gibi gorunuyor. simdi esitleyecegim.\n";
        setVolume(&myBox);
        cout << "iste esitlenmis yeni deger:\n";
        displayStructure(myBox);
    }
    else
    {
        displayStructure(myBox);
    }
    cout << endl;
    return 0;
}
//structure iceriginin basımı
void displayStructure(box x)
{
    using namespace std;
    cout << "Maker: " << x.maker << endl;
    cout << "Height: " << x.height << endl;
    cout << "Length: " << x.length << endl;
    cout << "Volume: " << x.volume << endl;

    return;
}
//volume'u diger 3 üyeye esitlemek
void setVolume(box * y)
{
    y -> volume = y -> height * y -> length * y -> width;

    return;
}