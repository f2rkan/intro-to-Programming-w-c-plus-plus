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
    cout << "veri girisi yapmadin.\n";

    return 0;
}
int input(int scores[], int limit)
{
    using namespace std;
    cout << "en fazla " << limit << " skor girebilirsin ve cikmak icin \"f\" tusuna bas.\n";
    int score;
    int count = 0;
    cout << "skor #1: ";
    while(count < limit && cin >> score)
    {
        scores[count++] = score;
        if(count < limit)
        cout << "skor #" << count + 1 << ": ";
    }
    return count;
}
void display(const int scores[], int n)
{
    using namespace std;
    int i = 0;
    cout << "iste giris yaptigin skorlar: ";
    while(i < n)
      cout << scores[i++] << " ";
    
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