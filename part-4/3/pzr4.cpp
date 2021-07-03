#include<iostream>
const int MAX = 10;
//input
int input(int scores[], int max);
//display
void display(const int scores[], int numScores);
//calculate
double calculate(const int scores[], int numScores);

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
        cout << "skor girisi yapilmadi.\n";
    }

    return 0;
}
//input
int input(int scores[], int max)
{
    cout << "en fazla " << max << " skor girebilirsin.\n";
    cout << "enter score #1 (enter \"f\" to quit): ";
    int count = 0;
    int score;
    while(count < max && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
        cout << "enter score #" << count + 1 << ": ";
    }
    return count;
}
//display
void display(const int scores[], int numScores)
{
    cout << "bu skorlari girdin: ";
    int i = 0;
    while(i < numScores)
    {
        cout << scores[i++] << " ";
    }

    return;
}
double calculate(const int scores[], int numScores)
{
    int sum = 0;
    int i = 0;
    while(i < numScores)
    {
        sum += scores[i++];
    }
    return (double) sum / numScores;
}