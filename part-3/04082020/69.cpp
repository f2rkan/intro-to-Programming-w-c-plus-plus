#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char d[10] = "?ate";
    char a;

    int sayim = 0;
    for(a = 'a'; strcmp(d, "kate"); a++)
    {
        cout << d << endl;
        d[0] = a;
        sayim++;
    }

    cout << sayim << " dongu sonrasi ulasilan kelime: " << d << endl;

    return 0;
}