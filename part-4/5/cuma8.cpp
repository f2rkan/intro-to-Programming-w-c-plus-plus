#include<iostream>

const int Max = 10;

//input
int input(int scores[], int limit);
//display
void display(const int scores[], int n);
//calculate
double average(const int scores[], int n);

int main(void)
{
    using namespace std;
    int arr[Max];
    int entries = input(arr, Max);

    if(entries)
    {
        display(arr, entries);
        cout << "ortalama: " << average(arr, entries) << " ";
    }
    else
    cout << "girdi yapmadin.\n";

    return 0;
}
int input(int scores[], int limit)
{
    using namespace std;
    
    cout << "en fazla " << limit << " skor girebilirsin.\n";
    cout << "cikmak icin \"f\" tusuna basabilirsin\n";
    int i = 0;
    int score;
    cout << "skor #1: ";
    while(i < limit && cin >> score)
    {
        scores[i++] = score;
        if(i < Max)
        cout << "skor #" << i + 1 << ": ";     
    }

    return i;
}
void display(const int scores[], int n)
{
    using namespace std;
    int i;
    while(i < n) 
    cout << "bunlari girdin: " << scores[i++] << " ";

    return;
}
double average(const int scores[], int n)
{
    int sum = 0;
    int i = 0;
    while(i < n)
    {
        sum += scores[i++];
    }
    return (double)sum / n;
}