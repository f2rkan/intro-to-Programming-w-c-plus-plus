#include<iostream>
#include<cstring>

const int MAX = 3;	// candy bar sayisi
const int LENGTH = 40;	// candy bar isim uzunlugu max degeri

struct CandyBar
{
	char name[LENGTH];
	float weight;
	int calories;
};

// CandyBar türünün değişkenlerini başlatma fonksiyonu
void setCandyBar( CandyBar & candy, const char * str = "Millennium Munch", double weight = 2.85, int calories = 350);

// Candybar değerlerini görüntüleme fonksiyonu
void displayCandyBar( const CandyBar & candy);

int main(void)
{
	using namespace std;

	cout << "CandyBar ile ilgili en fazla " << MAX << " deger girebilirsin.\n";
	CandyBar candy[MAX];
	
	int i = 0;	
	cout << "CandyBar #" << i + 1 << " (q to quit): ";
	char name[LENGTH];
	cin.get(name, LENGTH);

	//büyük giriş için boş tampon
	if (strlen(name) == LENGTH - 1)
		cin.ignore(100, '\n');

	float weight; 
	int calories;

	// çıkış koşulu
	while (i < MAX && (1 != strlen(name) || name[0] != 'q'))
	{
		cout << "Enter the weight: ";
		
		//uygun girişi sağla
		while ((cin >> weight) && weight == 0)
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout << "kotu giris, weight degerini yeniden gir: ";
		}
		cout << "Enter the calories: ";

		//uygun girişi sağla 
		while ((cin >> calories) && calories == 0)
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout << "kotu giris, calories degerini yeniden gir: ";
		}

		cin.get(); 	//arabellekteki satırsonu ifadesini sil
		setCandyBar( candy[i], name, weight, calories);
		i++;
		
		//yalnızca uygun sınırlar dahilindeyse yeni girdiler istenir
		if (i < MAX)
		{
			cout << "CandyBar name #" << i + 1 << " (q to quit): ";
			cin.get(name, 40);

			//name 39 karakterden fazlaysa ekstra karakterleri sil
			if (strlen(name) == 39)
				cin.ignore(100, '\n');
		}
	}

	//kullanıcı tarafından girilen CandyBar'ı gösterir
	for(int j = 0; j < i; j++)
	{
		cout << "CandyBar number #" << j + 1 << ":" << endl;
		displayCandyBar(candy[j]); 
	}
	
	cout << "Baslatilmamis CandyBar'in neye benzedigini gorelim." << endl;
	CandyBar tasty;
	setCandyBar(tasty);
	displayCandyBar(tasty);
	
	return 0;
}

void setCandyBar( CandyBar & candy, const char * str, double weight, int calories)
{
	strcpy(candy.name, str);
	candy.weight = weight;
	candy.calories = calories;
	return;
}

void displayCandyBar( const CandyBar & candy)
{
	using namespace std;
	cout << "Name: " << candy.name << endl;
	cout << "Weight: " << candy.weight << endl;
	cout << "Calories: " << candy.calories << endl;
	return;
}