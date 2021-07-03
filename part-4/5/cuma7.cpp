#include<iostream>
using namespace std;
const int Max = 10;
//input
int inputScores(int scores[], int limit);
//display
void display(const int scores[], int n);
//calculate
double average(const int scores[], int n);

int main(void)
{
    
    int arr[Max];
    int entries = inputScores(arr, Max);

    if(entries)
    {
        display(arr, entries);
        cout << " The average is " << average(arr, entries);
    }
    else
    
        cout << "girdi yapmadin.\n";
    
    cout << "\tDone.\n";

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
        if(count < Max)
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
    

    return;
}
double average(const int scores[], int n)
{
    int sum = 0;
	int i = 0;
	while (i < n)
	{
		sum += scores[i++];
	}
	return (double) sum / n; 
}