#include<iostream>
const int MAX = 10;
//input
int inputScores(int scores[], int max);
//display
void displayScores(const int scores[], int numScores);
//calculate
double averageScore(const int scores[], int numScores);
using namespace std;
int main(void)
{
    int arr[MAX];
    int entries = inputScores(arr, MAX);
    
    if(entries)
    {
        displayScores(arr, entries);
        cout << "ortalama skor " << averageScore(arr, entries) << endl;
    }
    else
        cout << "ortalamasi hesaplanacak skor girmedin.\n";
    
    return 0;
}
//input
int inputScores(int scores[], int max)
{
    cout << "en fazla " << max << " skor girebilirsin." << endl;
    cout << "enter score #1 (enter\"f\" when finished): ";
    int score;
    int count = 0;
    while(count < max && cin >> score) //slick use of cin
    {
        scores[count++] = score;
        if(count < max)
        cout << "enter score #" << count + 1 << " (enter \"f\" when finished): ";
    } 

    return count;
}
//display
void displayScores(const int scores[], int numScores)
{
    cout << "Bu skorlari girdin: ";
    int i = 0;
    while(i < numScores)
    cout << scores[i++] << " ";
    cout << endl;

    return;    
}
//calculate
double averageScore(const int scores[], int numScores)
{
    int sum = 0;
    int i = 0;
    while(i < numScores)
    {sum += scores[i++];}

    return (double) sum / numScores;
}
