#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>

using namespace std;

char **genNumStrings(size_t n)
{
    char **numStrs = new char *[n];
    srand(time(NULL));

    for(size_t i = 0; i < n; i++)
    {
        char str[10];
        snprintf(str, sizeof str, "%d", rand());

        numStrs[i] = new char [strlen(str) + 1];
        strcpy(numStrs[i], str);
    }

    return numStrs;
}
void freeNumStrings(char ** numStrs, size_t n)
{
    for(int i = 0; i < n; i++)
        delete [] numStrs[i];
    
    for(int i = 0; i < n; i++)
        delete [] numStrs;
}

int main(void)
{
    char **numStrs = genNumStrings(3);
    for(int i = 0; i < 3; i++)
        cout << numStrs[i] << endl;

        freeNumStrings(numStrs, 3);

        return 0;
}