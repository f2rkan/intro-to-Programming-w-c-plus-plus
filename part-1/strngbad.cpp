#include<cstring>
#include"strngbad.h"

using std::cout;

//static sınıf uyesini baslatma

int StringBad::num_strings = 0;

//class methodları
StringBad::StringBad(const char * s)
{
    len = std::strlen(s); //boyutu ayarlar
    str = new char[len + 1]; //depolamayı ayır
    std::strcpy(str, s); //pointerı baslatır
    num_strings++; //nesne sayısını ayarlar

    cout << num_strings << ": \"" << str
        << "\" object created\n"; //bilgi icin
}
StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++"); //varsayılan string
    num_strings++;
    
    cout << num_strings << ": \"" << str
        << "\" default object created\n"; //bilgi verir//fyi
}
StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, ";
    --num_strings; //gerekli
    cout << num_strings << " left\n";
    
    delete[] str; //gerekli
    

}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    
    os << st.str;
    return os;
}
StringBad::StringBad(const StringBad & st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    cout << num_strings << ":\"" << str << "\" nesnesi uretildi\n";
}