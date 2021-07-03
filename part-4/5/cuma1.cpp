#include<iostream>
#include<cstring>

using namespace std;

const int SLEN = 30;

//struct declaration
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

//function prototypes
//student yapısına veri girisi ister, girilen verileri depolar
int getinfo(student pa[], int n);
//student yapısını bagımsız degisken olarak alır ve icerigini goruntuler
void display1(student st);
//student yapısının adresini bagımsız degisken olarak alır ve icerigi goruntuler
void display2(const student * ps);
//bir dizi student yapısının ilk ogesinin adresini ve dizinin eleman sayısını bagımsız degisken
//olarak alır ve icerigi goruntuler
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
    delete[] ptr_stu;
    cout << "Done.\n";

    return 0;
}
//student yapısına veri girisi ister, girilen verileri de depolar
int getinfo(student pa[], int n)
{
    cout << "en fazla " << n << " ogrenci bilgisi girebilirsin.\n";
    int count;
    for(count = 0; count < n; count++)
    {
        cout << "enter his/her fullname(bos giris programi sonlandirir): ";
        cin.get(pa[count].fullname, 30);

        if(0 == strlen(pa[count].fullname)) break;
        else
        while(cin.get() != '\n') continue;

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
//student yapısını bagımsız degisken olarak alır ve icerigini goruntuler
void display1(student st)
{
    cout << "fullname: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;

    return;
}
//student yapısının adresini bagımsız degisken olarak alır ver icerigi goruntuler
void display2(const student * ps)
{
    cout << "fullname: " << ps -> fullname << endl;
    cout << "hobby: " << ps -> hobby << endl;
    cout << "ooplevel: " << ps -> ooplevel << endl;

    return;
}
//bir dizi student yapısının ilk ogesinin adresini ve dizinin eleman sayısını bagımsız degisken olarak alır ve
//icerigi goruntuler
void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << ":\n";
        display2(pa + i);
    }
    cout << endl;
    return;
}