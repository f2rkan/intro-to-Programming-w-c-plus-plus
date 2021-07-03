#include<iostream>

using namespace std;

void showmenu();
void report();
void comfort();

int main(void)
{
    showmenu();
    int choice;
    cin >> choice;
    
    while(choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n";
                break;
            case 2 : report();
                break;
            case 3 : cout << "The best worst day\n";
                break;
            case 4 : comfort();
                break;
            
            default : cout << "That's not a choice\n";
        }
        showmenu();
            cin >> choice;
    }
    cout << "bye!\n";
    return 0;
}
void showmenu()
{
    cout << "please enter 1, 2, 3, 4, or 5:\n"
    << "1) alarm\t2) report\n"
    << "3) alibi\t4) comfort\n"
    << "5) quit\n";
}
void report()
{
    cout << "it's been an excellent week for business\n"
    << "sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
    cout << "your employees think you are the finest CEO\n"
    << "in the industry. The board of diectors think\n"
    << "you are the finest CEO in the indurstr\n";
}