#include<iostream>
#include<cstring>

using namespace std;

const int SLEN = 30;
//structure declarations
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
//function prototypes
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(void)
{
    cout << "Enter class size: ";
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
    cout << "Done.\n";

    return 0;
}
//student yapısı hakkında veri ister ve bunları depolar
int getinfo(student pa[], int n)
{
    cout << "en fazla " << n << " ogrenci bilgisi "
    "girebilirsin.\n";
    int count;

    for(count = 0; count < n; count++)
    {
        cout << "Student " << count + 1 << ": " << endl;
        cout << "Enter his/her full name(or enter nothing "
        "when finished): ";
        cin.get(pa[count].fullname, 30);

        //ogrencinin adı bos satır girilirse programdan cıkılır
        if(0 == strlen(pa[count].fullname))
        break;

        else

         //ekstra girişi sil:
         while(cin.get() != '\n')
         continue;

         cout << "enter his/her hobby: ";
         
         cin.get(pa[count].hobby, 30);
         while(cin.get() != '\n') //ekstra girisi sil
         continue;
         

         cout << "enter his/her OOP level: ";
         cin >> pa[count].ooplevel;
         cin.get(); //yeni satır karakterini sil     
    }
    return count;
}
//student yapısını bagımsız degisken olarak alır ve icerigini 
//goruntuler
void display1(student st)
{
    cout << "Full name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP level: " << st.ooplevel << endl;

    return;
}
//student yapısının adresini bagımsız degisken olarak alır 
//ve yapının icerigini goruntuler
void display2(const student * ps)
{
    cout << "Full name: " << ps -> fullname << endl;
    cout << "Hobby: " << ps -> hobby << endl;
    cout << "OOP Level: " << ps -> ooplevel << endl;

    return;
}
//bir dizi student yapısının ilk elemanının adresini 
//ve dizi elemanı sayısını bagımsız degisken olarak alır 
//ve yapıların icerigini goruntuler:
void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Student #" << i + 1 << ": " << endl;
        display2(pa + i);
    }
    cout << endl;

    return;
}