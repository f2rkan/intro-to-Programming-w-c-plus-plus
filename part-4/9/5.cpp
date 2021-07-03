#include<iostream>

using namespace std;

const int contribution = 10000;
struct donors
{
    string name;
    double amount;
};

int main(void)
{
    cout << "how many donors are there?";
    int numberDonors;
    cin >> numberDonors;
    cin.get();

    donors * list = new donors[numberDonors];
    int donationSizes[numberDonors];

    for(int i = 0; i < numberDonors; i++)
    {
        cout << "Donor number " << i + 1 << endl
             << "Name: ";
        getline(cin, (list + i) -> name, '\n');
        cout << "Dontribution: ";
        cin >> (list + i) -> amount;
        cin.get();

        if((list + i) -> amount > contribution)
            donationSizes[i] = 1;
        else
            donationSizes[i] = 0;
    }
    cout << "List of Grand Patrons: " << endl;
    int counter = 0;
    for(int i = 0; i < numberDonors; i++)
    {
        if(donationSizes[i] == 1)
        {
            cout << (list + i) -> name << ", $" << (list + i) -> amount << endl;
            counter = 1;
        }
    }

    if(!counter)
        cout << "None" << endl;
    
    counter = 0;

    cout << "List of remaining patrons:" << endl;

    for(int i = 0; i < numberDonors; i++)
    {
        if(donationSizes[i] == 0)
        {
            cout << (list + i) -> name << endl;
            counter = 1;
        }
    }
    if(!counter)
        cout << "None." << endl;

    return 0;
}