#include<iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float volume;
    float length;
    float width;
};
void setVolume(box * y);
void display(box x);
int main(void)
{
    cout << "enter the maker: ";
    box myBox;
    cin.get(myBox.maker, 40);

    while(cin.get() != '\n')
		continue;

    cout << "enter the height: ";
    cin >> myBox.height;
    cout << "enter the length: ";
    cin >> myBox.length;
    cout << "enter the width: ";
    cin >> myBox.width;

    cout << "enter the volume: ";
    cin >> myBox.volume;
    
    cout << "bunlari girdin:\n";
    display(myBox);
    if(myBox.volume != myBox.height * myBox.length * myBox.width)
    {
        cout << "uyumsuz.\n";
        setVolume(&myBox);
        cout << "duzeltilmis:\n";
        display(myBox);
    }
    return 0;
}
void setVolume(box * y)
{
    y -> volume = y -> height * y -> length * y -> width;
    return;
}
void display(box x)
{
    cout << "maker: " << x.maker << endl;
    cout << "height: " << x.height << endl;
    cout << "length: " << x.length << endl;
    cout << "width: " << x.width << endl;
    cout << "volume: " << x.volume << endl;
    return;
 }