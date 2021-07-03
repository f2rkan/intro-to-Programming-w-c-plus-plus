#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>

using namespace std;

/*
'n' rasgele sayı dizelerinin listesini döndürür.
Her sayı dizesi rastgele uzunluktadır.
*/
char **genNumStrings(size_t n)
{
    //char * numStrs dinamik dizisi oluşturma çift işaretçidir
    char **numStrs = new char *[n];
    // rastgele sayı üretecini şimdiki zamana ek.
    srand(time(NULL));

    for(size_t i = 0; i < n; i++)
    {
        //rastgele sayı uretiliyor
        char str[10];
        snprintf(str, sizeof str, "%d", rand());

        //Bir sayı dizesi için bellek ayırma char * işaretçisini numStrs dizisinde saklar
        numStrs[i] = new char [strlen(str) + 1];
        strcpy(numStrs[i], str);
    }
    //return edilen deger numStrs
    return numStrs;
}
void freeNumStrings(char ** numStrs, size_t n)
{
    //ilk once char * delete
    for(int i = 0; i < n; i++)
        delete[] numStrs[i];
    
    //simdi char**'ın kendisi delete
    delete [] numStrs;
}

int main(void)
{
    char **numStrs = genNumStrings(15);
    //string'leri bas
    for(int i = 0; i < 15; i++)
        cout << numStrs[i] << endl;

        //free
        freeNumStrings(numStrs, 15);

        return 0;
}