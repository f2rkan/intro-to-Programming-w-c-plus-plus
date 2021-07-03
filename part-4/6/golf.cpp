#include<iostream>
const int MAX = 10;

//input
int inputScores(int scores[], int max);
//display
void displayScores(const int scores[], int numScores);
//calculate average
double averageScore(const int scores[], int numScores);

using namespace std;

int main(void)
{
    int arr[MAX];
    int entries = inputScores(arr, MAX);

    if(entries)
    {
        displayScores(arr, entries);
        cout << "The average score is " << averageScore(arr, entries) << endl;
    }
    else
    {
        cout << "ortalamasi hesaplanacak skor girisi yapmadin.\nProgram sonlandi.\n";
    }
    return 0;
}
int inputScores(int scores[], int max)
{
    cout << "en fazla " << max << " skor girisi yapabilirsin. programi sonlandirmak"
    " icin \"f\" tusuna basabilirsin.\n";
    cout << "enter scores #1: ";

    int score;
    int count = 0;
    while(count < max && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
        cout << "enter scores #" << count + 1 << " (enter \"f\" when finished): ";
    }
    return count;
}
void displayScores(const int scores[], int numScores)
{
    cout << "bu skorlari girdin: ";
    int i = 0;
    while(i < numScores)
    {
        cout << scores[i++] << " ";
    }
    cout << endl;
}
double averageScore(const int scores[], int numScores)
{
    int sum = 0;
    int i = 0;
    while(i < numScores)
    {
        sum += scores[i++];
    }
    return (double) sum / numScores;
}