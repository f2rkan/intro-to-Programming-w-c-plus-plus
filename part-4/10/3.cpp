#include<iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void order1(box x);
void sett(box * y);

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
    
    cout << "bunlari girdin:" << endl;
    order1(myBox);

    if(myBox.volume != myBox.length * myBox.width * myBox.height)
    {
        cout << "uyusmayan veri. simdi duzeltecegim." << endl;
        sett(&myBox);
        cout << "duzeltilmis veriler:\n";
        order1(myBox);
    }

    cout << endl;

    return 0;
}
void order1(box x)
{
    using namespace std;

    cout << "maker: " << x.maker << endl;
    cout << "length: " << x.length << endl;
    cout << "height: " << x.height << endl;
    cout << "width: " << x.width << endl;
    cout << "volume: " << x.volume << endl;

    return;
}

void sett(box * y)
{
    y -> volume = y -> height * y -> width * y -> length;

    return;
}