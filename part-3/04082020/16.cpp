#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << endl;

    cout << "enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "strcpy() oncesi:\n";
    cout << animal << " and " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "strcpy() sonrasi:\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete [] ps;

    return 0; 
}