#include<iostream>

const int MAX = 10;

int inputScores(int scores[], int max);
void displayScores(const int scores[], int numScores);
double averageScore(const int scores[], int numScores);

using namespace std;

int main(void)
{
    int arr[MAX];
    int entries = inputScores(arr, MAX);

    if(entries)
    {
        displayScores(arr, entries);
        cout << "ortalama skor: " << averageScore(arr, entries) << endl;
    }
    else
        cout << "ortalmasi hesaplanacak skor yok\n";
    
    return 0;
}

int inputScores(int scores[], int max)
{
    cout << "en fazla " << max << " skor girisi yapabilirsin (erken cikmak icin \"f\" tusuna basabilirsin): ";
    cout << "enter score #1: ";

    int score;
    int count = 0;

    while(count < max && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
            cout << "enter score #" << count + 1 << ": ";
    }
    return count;
}

void displayScores(const int scores[], int numScores)
{
    cout << "asagidaki skorlari girdin\n";
    int i = 0;
    while(i < numScores)
        cout << scores[i++] << " ";
    
    cout << endl;

    return;
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