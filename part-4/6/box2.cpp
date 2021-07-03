/*asagıdaki structure'ın icini doldur:

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

f1) üyelerin girisini kullanıcıdan iste, sonra hepsini ekrana bas
f2) fonksiyon prototipine structure'ın adresini tanımla, pointer olarak giris yap ve volume uyesinin degerini
diger 3 üyenin çarpımı halinde yaz.*/

#include<iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

//function prototypes
void displayStructure(box x);
void setVolume(box * y);

int main(void)
{
    using namespace std;
    box myBox;

    cout << "maker: "; cin.get(myBox.maker, 40);
    while(cin.get() != '\n') continue;

    cout << "height: "; cin >> myBox.height;
    cout << "length: "; cin >> myBox.length;
    cout << "width: "; cin >> myBox.width;
    cout << "volume: "; cin >> myBox.volume;
    

    if(myBox.volume == myBox.height * myBox.length * myBox.width)
    {
        cout << "iste yazdiklarin:\n";
        displayStructure(myBox);
    }
    else
    {
        cout << "volume uyesi uyumsuz gorunuyor. simdi esitleyecegim.\n";
        setVolume(&myBox);
        cout << "iste yenilenen degerler:\n";
        displayStructure(myBox);
    }
    cout << "\nDone.\n";

    return 0;
}
//structure uyelerini ekrana basan fonksiyon
void displayStructure(box x)
{
    using namespace std;
    cout << "Maker: " << x.maker << endl;
    cout << "Height: " << x.height << endl;
    cout << "Length: " << x.length << endl;
    cout << "Width: " << x.width << endl;
    cout << "Volume: " << x.volume << endl;

    return; 
}
//volume uyesi, diger uyelerin carpımına esit olmadıgı durumda esitleme yapacak fonksiyon
void setVolume(box * y)
{
    y -> volume = y -> height * y -> width * y -> length;

    return;
}