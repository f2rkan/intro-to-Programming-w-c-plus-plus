#include<iostream>

struct box
{
    char maker[40];
    float height;
    float length;
    float width;
    float volume;
};
//functio prototypes
void displayStructure(box x);
void setVolume(box * y);

int main(void)
{
    using namespace std;
    box myBox;
    cout << "enter the maker: "; cin.get(myBox.maker, 40);

    while(cin.get() != '\n')
    continue;

    cout << "enter the height: "; cin >> myBox.height;
    cout << "enter the length: "; cin >> myBox.length;
    cout << "enter the width: "; cin >> myBox.width;
    cout << "enter the volume: "; cin >> myBox.volume;

    if(myBox.volume == myBox.height * myBox.length * myBox.width)
    {
        cout << "\niste girdiklerin:\n";
        displayStructure(myBox);
    }
    else
    {
        cout << "\nVolume uyesi uyumsuz gorunuyor. Simdi duzeltecegim.\n";
        setVolume(&myBox);
        cout << "iste yeni volume degeri ve girdiklerin:\n";
        displayStructure(myBox);
    }
    cout << "\nDone.\n";

    return 0;
}
//doldurulan structure uyelerini ekrana basan fonksiyon
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
//volume uyesi uyumsuz oldugunda onu duzeltecek fonksiyon
void setVolume(box * y)
{
    y -> volume =  y -> height * y -> length * y -> width;

    return;
}