#include<iostream>
#include<cstring>
const int SLEN = 30;
using namespace std;
//structure declaration
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
//function prototypes
//student yapısına veri girişi yapar; girilen verileri depolar
int getinfo(student pa[], int n);
//student yapısını bagımsız degisken olarak alır ve ekranda goruntuler
void display1(student st);
//student yapısının adresini bagımsız degisken olarak alır ve ekranda goruntuler
void display2(const student * ps);
//bir dizi student yapısının ilk ogesinin adresini ve dizinin eleman sayısını bagımsız degisken olarak alır ve ekranda goruntuler
void display3(const student pa[], int n);

int main(void)
{
    cout << "enter class size: ";
    int class_size;
    cin >> class_size;

    while(cin.get() != '\n')
    continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;

    cout << "Done!\n";

    return 0;
}
//student yapısına veri girisi alır, girilen verileri depolar
int getinfo(student pa[], int n)
{
    cout << "en fazla " << n << " eleman girisi yapabilirsin.\n";
    int count;
    for(count = 0; count < n; count++)
    {
        cout << "Student #" << count + 1 << ":\n";
        cout << "enter his/her fullname (bos karakter girisi yaparsan program sonlanir): ";
        cin.get(pa[count].fullname, 30);
        if(0 == strlen(pa[count].fullname))
        break;
        else        
        while(cin.get() != '\n')
        continue;

        cout << "enter his/her hobby: ";
        cin.get(pa[count].hobby, 30);
        while(cin.get() != '\n')
        continue;

        cout << "enter his/her ooplevel: ";
        cin >> pa[count].ooplevel;
        cin.get();
    }
    return count;
}
//student yapısını bagımsız degisken olarak alır ve ekranda goruntuler
void display1(student st)
{
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP Level: " << st.ooplevel << endl;

    return;
}
//student yapısının adresini bagımsız degisken olarak alır ve ekranda goruntuler
void display2(const student * ps)
{
    cout << "Fullname: " << ps -> fullname << endl;
    cout << "Hobby: " << ps -> hobby << endl;
    cout << "OOP Level: " << ps -> ooplevel << endl;

    return;
}
//bir dizi student yapısının ilk ogesinin adresini ve dizinin eleman sayısını bagımsız degisken olarak alır ve ekranda goruntuler
void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << ":\n";
        display2(pa + i);
    }
    cout << endl;
}
