#include<iostream>

int main(void)
{
    using namespace std;
    
    float ted[10] = {1, 2, 3, 4, 5, 6,7,8,9,10};
    float * t = new float[10];
    t = &ted[0];
    

    cout << "ilk eleman: " << *t << "\nson eleman: " << (*t + 9) << endl;

    return 0;
}