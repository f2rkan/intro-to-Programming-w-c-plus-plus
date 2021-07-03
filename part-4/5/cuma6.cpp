#include<iostream>
using namespace std;
const int max = 10;
//input
int inputScores(int score[], int limit);
//display
void display(const int score[], int n);
//calculate
double average(const int score[], int n);

int main(void)
{
    
    int arr[max];
    int entries = inputScores(arr, max);

    if(entries)
    {
        display(arr, entries);
        cout << "The average is " << average(arr, entries) << endl;
    }
    else
    {
        cout << "girdi yapmadin.\n";
        break;
    }
    cout << "Done.\n";

    return 0;
}
int inputScores(int scores[], int limit)
{
    cout << "en fazla " << limit << " puan girebilirsin.\n";
    cout << "cikmak icin \"f\" tusuna basabilirsin, puan girisine basla: ";
    int score;
    int count = 0;
    while(count < limit && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
        cout << "enter score #" << count + 1 << " (enter \"f\" when finished): ";
    }
    return count;
}
void display(const int scores[], int n)
{
    cout << "iste girdiklerin: ";
    int i = 0;
    while(i < n)
    cout << scores[i++] << " ";
    cout << endl;

    return;
}
double average(const int scores[], int n)
{
    double total = 0.0;
    int i = 0;
    while(i < n)
    {
        total += scores[i++];
    }
    cout << "/ total: " << total << " /average: " << total / n;

    return i; 
}