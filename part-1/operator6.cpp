#include<iostream>


class KUTUPSAL
{
    public:
        int x, y;
        KUTUPSAL operator-(KUTUPSAL & k);
        void giris();
        void yaz() const;
};

void KUTUPSAL::giris()
{
    using std::cout;
    using std::cin;

    cout << "x: ";
        cin >> x;
    cout << "y: ";
        cin >> y;
}
void KUTUPSAL::yaz() const
{
    using std::cout;
    using std::endl;

    if(x > 0)
    {
        cout << x;
        if(y > 0)
            cout << "-" << y;
        else
            cout << y << "i" << endl;
    }
    else
    {
        cout << x;
        if(y > 0) cout << "-" << y << "i" << endl;
        else  cout << y << "i" << endl;
    }    
}

KUTUPSAL KUTUPSAL::operator-(KUTUPSAL & k)
{
    KUTUPSAL hesap;
    hesap.x = x - k.x;
    hesap.y = y - k.y;

    return hesap;
}
int main(void)
{
    KUTUPSAL k1, k2;

    k1.giris();
    k2.giris();

    k1 = k1 - k2;

    k1.yaz();

    return 0;
}