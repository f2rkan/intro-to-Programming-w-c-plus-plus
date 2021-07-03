#include<iostream>
#include"BankAccount.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    BankAccount checking("Furkan", "43735746942", 2000.00);
    cout << "Hesabimiz:" << endl;
        checking.printAccount();
    cout << "Now we deposit $100" << endl;
        checking.deposit(100);
        checking.printAccount();
    cout << "And now we withdraw $1500" << endl;
        checking.withdraw(1500);
        checking.printAccount();
    cout << "simdi bazi yasadisi isleri deneyelim" << endl;
    cout << "let's deposit $-200" << endl;
        checking.deposit(-200);
        checking.printAccount();
    cout << "Let's withdraw $-500" << endl;
        checking.withdraw(-500);
        checking.printAccount();
    cout << "Finally let's withdraw $10,000" << endl;
        checking.withdraw(10000);
        checking.printAccount();
    
    cout << "negatif bakiyeyle bir tasarruf hesabi baslatmaya calisalim" << endl;
    
    BankAccount savings("Jerry", "456878333", -10000);
    savings.printAccount();

    cout << "Bye!\n";
}