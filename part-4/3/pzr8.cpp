#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void displayStructure(box x);
void setVolume(box * y);

int main(void)
{
    cout << "enter the maker:\n";
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

    //myBox'ı bas:
    cout << endl << "Bunlari girdin: " << endl;
    displayStructure(myBox);

    //volume, diger boyutlarla eslesmiyorsa volume'u resetle
    if(myBox.volume != myBox.height * myBox.length * myBox.width)
    {
        cout << "volume diger boyutlarla eslesmiyor. ";
        cout << "birak volume'u tamir edeyim." << endl;
        setVolume(&myBox);
        cout << "iste duzeltilmis boyutlar:\n";
        displayStructure(myBox);
    }
    cout << endl;
    return 0;
}

void displayStructure(box x)
{
    cout << "height: " << x.height << endl;
    cout << "width: " << x.width << endl;
    cout << "length: " << x.length << endl;
    cout << "volume: " << x.volume << endl;

    return;
}
void setVolume(box * y)
{
    y -> volume =
    y -> height * y -> length * y -> width;

    return;
}