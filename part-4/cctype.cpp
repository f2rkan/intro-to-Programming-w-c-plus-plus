#include<iostream>
#include<cctype>

int main(void)
{
	using namespace std; 	

	cout << "You may begin typing, enter @ to quit" << endl;
	char ch;
	cin.get(ch);
	
	while (cin.good() && ch != '@')
	{
		if (isdigit(ch)) 
		{
			cin.get(ch);
			continue;
		}
		else if (isupper(ch))
			ch = tolower(ch);
		else if (islower(ch))
			ch = toupper(ch);
		
		cout << ch;
		cin.get(ch);
	}

	cout << endl << "All done!" << endl;

	return 0;
}