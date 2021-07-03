#include<iostream>
#include<cstring>

template<typename T>
T maxn(T arr[], int size);

template<>
const char * maxn(const char * arr[], int size);

int main(void)
{
    using namespace std;
    char str1[] = "H";
    char str2[] = "Hi";
    char str3[] = "Hey";
    char str4[] = "Greetinghhhhs!";
    char str5[] = "Goodbye!";

    const char * arrs[5] =
    {
        str1,
        str2,
        str3,
        str4,
        str5
    };
    
    int arri[5] = {1, 2, 3, 100, -100};

    //uzmanlık kullanılır
    cout << "en buyuk string " << maxn(arrs, 5) << endl;

    //şablon kullanılır
    cout << "en buyuk numara " << maxn(arri, 5) << endl;

    return 0;
}
template<typename T>
T maxn(T arr[], int size)
{
    T max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
template <>
const char * maxn(const char * arr[], int size)
{
    const char * longest = arr[0];
	
    for(int i = 0; i < size; i++)
    {
        if(strlen(arr[i]) > strlen(longest))
            longest = arr[i];
    }
	
	return longest;
}
