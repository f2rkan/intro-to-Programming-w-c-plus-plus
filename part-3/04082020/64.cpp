#include<iostream>

int main(void)
{
    using namespace std;

    int quizscores[10] =
    {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "doing it right: ";

    int i;
    for(i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i <<" is a 20\n";
    

    cout << "yanlis fakat deniyoruz:\n";

    for(i = 0; quizscores[i] = 20; i++)
        cout << "quiz " << i << " is a 20\n";

    
    return 0;
}