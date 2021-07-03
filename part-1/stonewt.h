#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum{Lbs_per_stn = 14}; //tas bası fiyat
        //sınıfa özgü sabitleri tanımlamak icin enum kullandık //tamsayı olması koşuluyla
        //alternative: static const int Lbs_per_stn = 14;

        int stone; //bütün tas
        double pds_left; //kesirli kilo
        double pounds; //kilo cinsinden tüm ağırlık
    public:
        Stonewt(double lbs); //double pounds icin constructor
        Stonewt(int stn, double lbs); //stone, lbs icin constructor
        Stonewt(); //default constructor
        ~Stonewt(); // default destructor
        
        void show_lbs() const; //agırlıgı pound formatında goster
        void show_stn() const; //agırlıgı stone formatinda goster
};
#endif

/*
Stonewt blossem(132.5); //weight = 132.5 pounds
Stonewt buttercup(10, 2); //weight = 10 stone, 2 pounds
Stonewt bubbles; //weight = default value
*/