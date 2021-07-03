#include<iostream>

const int MAX = 10;
//input
int inputScores(int *, int);
//display
void displayScores(const int *, int);
//average
double averageScore(const int *, int);

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
        cout << "skor girmedigin icin ortalama hesaplanmadi." << endl;
        cout << "bye." << endl;

    return 0;
}
int inputScores(int scores[], int Max)
{
    using namespace std;
    cout << "en fazla " << Max << " skor girisi yapabilirsin." << endl;
    cout << "enter score #1 (\"q\" to quit): ";

    int score;
    int count = 0;

    while(count < Max && cin >> score)
    {
        scores[count++] = score;        
        
        if(count < Max)
            cout << "enter score #" << count + 1 << "(\"q\" to quit): ";
    }

    return count;
}
void displayScores(const int scores[], int numScores)
{
    using namespace std;
    cout << "asagidaki skorlari girdin:\n";
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
