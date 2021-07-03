#include<iostream>
using namespace std;
#include<cstring>



struct stringy
{
  char * str;

  int ct;  
};

void set(stringy & x, char str[]);
void show(const stringy & x, int repeat = 1);
void show(const char str[], int repeat = 1);

int main(void)
{
    stringy beany;
    char testing[] = "gerceklik eskisi gibi degil.";
    
    //ilk argüman bir referans.
    //testin kopyasını tutmak için yer ayırır
    //str grubunu beany'yi yeni bloga isaret edecek sekilde
    //ayarlar, testi yeni bloga kopyalar ve beany'nin ct üyesini
    //ayarlar
    set(beany, testing);
    show(beany); //üye stringini bir kez yazdırır
    show(beany, 2); //üye stringini iki kez yazdırır

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); //string'i bir kez yazdırır
    show(testing, 3); //testing string'ini 3 kez yazdırır
    show("Done!");

    delete[] beany.str;
    return 0;
}
//dinamik char dizisi olusturma, string'i konuma kopyalama ve konumu structure'a atama
void set(stringy & x, char str[])
{
    int length = strlen(str);
    char * pstr = new char[length + 1];
    strcpy(pstr, str);

    x.str = pstr;
    x.ct = length;

    return;
}

void show(const stringy & x, int repeat)
{
    for(int i = 0; i < repeat; i++)
        cout << x.str << endl;
    
    return;
}

void show(const char str[], int repeat)
{
    for(int i = 0; i < repeat; i++)
        cout << str << endl;

    return;
}