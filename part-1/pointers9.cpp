#include<iostream>

using namespace std;

int main(void)
{
    const char * ogrenci_adi = new char[10];
    ogrenci_adi = "Mehmet";
    
    cout << ogrenci_adi[3] << endl;
    delete [] ogrenci_adi;

    int * sira_no;
    sira_no = new int[10];
    sira_no[0] = 1;
    sira_no[1] = 3;
    sira_no[2] = 5;
    sira_no[3] = 6;

    cout << sira_no[2] << endl;
    delete[] sira_no;
    return 0;
}