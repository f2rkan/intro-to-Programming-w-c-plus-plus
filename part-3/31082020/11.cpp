#include<iostream>

int main(void)
{
    using namespace std;

    string word;
    cout << "kelime girisine basla: ";

    int sayac = 0;
    getline(cin, word);

    while(word != "done")
    {
        sayac++;
        cout << "siradaki: ";
        getline(cin, word);
    }
    cout << "total: " << sayac << endl;
    
    return 0;
}