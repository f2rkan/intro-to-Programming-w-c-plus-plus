#ifndef D_H_
#define D_H_
#include<string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = share_val * shares;}
    public:
        Stock();
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock();
        void buy(long n, double price);
        void sell(long n, double price);
        void update(double price);
        void show(void);
};

#endif