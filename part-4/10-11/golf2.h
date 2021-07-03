#ifndef GOLF2_H_
#define GOLF2_H_

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
        void setHandicap(int handicap);
        void showgolf() const;
};

#endif