#ifndef QQ_H_
#define QQ_H_

const int Len = 40;

class Golf
{
    private:
        char fullname[Len];
        int handicap;
    public:
        Golf();
        Golf(const char * fullname, int handicap);
        int setgolf();
        void showgolf() const;
        void sethandicap(int handicap);
};

#endif