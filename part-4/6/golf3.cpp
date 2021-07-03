/* kullanıcıdan bir dizide saklanmak üzere 10 golf skoru girmesi istenir; 10 skor girmeden programdan çıkabilmesi için
bir yol sunulur; program, kullanıcının girdigi skorları tek satırda gosterir; skorların ortalaması hesaplanır; ekrana basılır;
program 3 fonksiyondan oluşur: input, display, average*/

#include<iostream>

const int MAX = 10;

//function prototypes
//input
int inputScores(int scores[], int max);
//display
void displayScores(const int scores[], int numScores);
//calculate average
double averageScores(const int scores[], int numScores);

int main(void)
{
    using namespace std;
    int arr[MAX];
    int entries = inputScores(arr, MAX);
    
    cout << "skor girisi islemi sonlandi.\n";
    
    if(entries)
    {
        displayScores(arr, MAX);
        cout << "ortalama skor: " << averageScores(arr, MAX);
    }
    else
    {
        cout << "gecerli girdi olmadigi icin program sonlandi." << endl;
    }
    
    return 0;
}
//input
int inputScores(int scores[], int max)
{
    using namespace std;
    cout << "en fazla " << max << " skor girisi yapabilirsin. Programdan erken cikmak icin \"f\" tusuna basabilirsin.\n";
    int count = 0;
    int score;
    
    cout << "score #1: "; 
    while(count < max && cin >> score)
    {
        scores[count++] = score;
        if(count < max)
        cout << "score #" << count + 1 << ": ";
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
double averageScores(const int scores[], int numScores)
{
    int sum = 0;
    int i = 0;

    while(i < numScores)
    {
        sum += scores[i++];
    }
    return (double) sum / numScores;
}