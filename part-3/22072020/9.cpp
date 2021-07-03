#include<iostream>
#include<string>

int main(void)
{
    using namespace std;

    string s1 = "penguin";
    string s2, s3;

    cout << "s2 = s1:" << endl;
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "s2'ye bir c-stili string ataniyor:\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "s3 = s1 + s2" << endl;

    s3 = s1 + s2;

    cout << "s3: " << s3 << endl;
    cout << "varolan bir string'e ekleme yapabiliriz: ";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

    return 0;
}