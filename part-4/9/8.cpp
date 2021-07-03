//bir metin dosyası acan ve onun karakterlerini okuyup sayısını cıktılayan program yaz:

#include<iostream>
#include<fstream>
#include<cstdlib>

int main(void)
{
    using namespace std;
    cout << "dosya adini gir: ";
    char filename[100];
    cin.getline(filename, 100);

    ifstream inFile;
    inFile.open(filename);

    if(!inFile.is_open())
    {
        cout << "\'\'" << filename << "\'\'" << " dosyasina ulasilamadi." << endl << "program sonlandi.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    int karakter = 0;
    inFile >> ch;

    while(!inFile.eof())
    {
        karakter++;
        inFile >> ch;
    }
    cout << filename << " dosyasinda toplam " << karakter << " karakter var.\n";

    cout << "bYe ," << endl;

    inFile.close();

    return 0;

}