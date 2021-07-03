#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char q[10] = "done";
    char qq[20];
    cout << "kelime girisine basla: ";
    int sayac = 0;
    cin >> qq;
    while(strcmp(qq, q))
    {
        sayac++;
        cout << "siradaki: ";
        cin >> qq;
    }
    cout << "total: " << sayac << endl;

    return 0;
}