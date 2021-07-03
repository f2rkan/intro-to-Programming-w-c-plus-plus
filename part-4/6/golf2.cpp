#include<iostream>
const int MAX = 10;
//input
int inputScores(int scores[], int max);

//display
void displayScores(const int scores[], int numScores);

//calculate average
double averageScore(const int scores[], int numScores);

int main(void)
{
    using namespace std;
    int arr[MAX];
    int entries = inputScores(arr, MAX);

    if(entries)
    {
        displayScores(arr, entries);
        cout << "ortalama skor: " << averageScore(arr, entries) << endl;
    }
    else
    {
        cout << "skor girisi yapmadigin icin hesaplanacak bir sey yok.\nProgram sonlandi.\n";
    }
    return 0;
}
int inputScores(int scores[], int max)
{
    using namespace std;
    cout << "en fazla " << max << " skor girisi yapabilirsin. Girisi sonlandirmak icin \"f\" tusuna basabilirsin.\n";
    int count = 0;
    int score;
    cout << "skor #1: ";
    while(count < max && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
        cout << "skor #" << count + 1 << ": ";
    }
    return count;
}
//display
void displayScores(const int scores[], int numScores)
{
    using namespace std;
    cout << "bu skorlari girdin: ";
    int i = 0;
    while(i < numScores)
    {
        cout << scores[i++];
        if(i < numScores)
        cout << " ";
    }
    cout << "; ";
}
//calculate average
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