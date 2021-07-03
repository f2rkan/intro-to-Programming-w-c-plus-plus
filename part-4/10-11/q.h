#ifndef Q_H_
#define Q_H_

const int Len = 40;

class Golf
{
    private:
        char fullname[Len];
        int deger;
    public:
        Golf();
        Golf(const char * fn, int d);
        int setgolf();
        void setdeger(int d);
        void showgolf() const;
};

#endif