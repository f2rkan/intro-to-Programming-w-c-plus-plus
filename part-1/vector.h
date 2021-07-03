#include<iostream>
#ifndef VECTORR_H_
#define VECTORR_H_

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL}; //dikdortgen rect - kutupsal pol
        private:
            double x; //yatay
            double y; //dikey
            double mag; //uzunluk
            double ang; //açı
            Mode mode; //rect or pol
        public:
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
        
        double xval() const {return x; }
        double yval() const {return y; }
        double magval() const {return mag; }
        double angval() const {return ang; }

        void polar_mode(); //mode'u polar olarak ayarla
        void rect_mode(); //mode'u rect olarak ayarla

        //operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        //friends
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif