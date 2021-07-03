#include"deneme.h"
#include<cstring>
using std::cout;

int stri::num_strings = 0;

stri::stri()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "default");
    num_strings++;
    
    cout << "\"" << num_strings << ": \"" << str << " nesnesi uretildi\n";
}
stri::stri(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}
stri::~stri()
{
    cout << "\"" << str << "\" nesnesi silindi\n";
    --num_strings;
    cout << num_strings << " kaldi\n";
    delete[] str;
}

std::ostream & operator<<(std::ostream & os, const stri & st)
{
    os << st.str;
    return os;
}
