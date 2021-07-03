#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode{RECT, POL};
        //Dikdörtgen icin RECT; POLAR modlar için POL
        private:
            double x; //yatay deger
            double y; //dikey deger
            double mag; //vector uzunlugu
            double ang; //vektor'ün açı derecesi
            Mode mode; //RECT ya da POL
        
        //private degerler ayarlanır
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();

            double xval() const {return x;} //x degerinin bildirimi
            double yval() const {return y;} //report y value
            double magval() const {return mag;} 
            double angval() const {return ang;}
            void polar_mode(); //mode'u POL olarak ayarla
            void rect_mode(); //mode'u rect olarak ayarla

            //operator overloading
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;

            //friends
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &
            operator<<(std::ostream & os, const Vector & v);
    };
}

#endif