#include<iostream>
const int MAX = 10;
//input
int input(int s[], int max);
//display
void display(const int s[], int ss);
//calculate
double calculate(const int s[], int ss);

using namespace std;
int main(void)
{
    int arr[MAX];
    int entries = input(arr, MAX);
    
    if(entries)
    {
        display(arr, entries);
        cout << "ortalama skor: " << calculate(arr, entries) << endl;
    }
    else
    {
        cout << "skor girisi yapmadin.\n";
    }
    return 0;
}
//input
int input(int s[], int max)
{
    cout << "en fazla " << max << " skor girebilirsin" << endl;
    cout << "enter the score #1: ";
    int score;
    int count = 0;
    while(count < max && cin >> score)
    {
        s[count++] = score;
        if(count < max)
        cout << "enter the score #" << count + 1 << " (press \"f\" to quit): ";
    }
    return count;
}
//display
void display(const int s[], int ss)
{
    cout << "bu skorlari girdin: ";
    int i = 0;
    while(i < ss)
    {
        cout << s[i++] << " "; 
    }
    return;
}
//calculate
double calculate(const int s[], int ss)
{
    int sum = 0;
    int i = 0;

    while(i < ss)
    {
        sum += s[i++];
    }
    return (double)sum / ss;
}