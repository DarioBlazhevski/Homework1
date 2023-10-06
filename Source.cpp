#include <iostream>

using namespace std;

int main()
{

	int broj, suma = 0;
	
	cout << "Vnesi cetirocifrenbroj : ";
		cin >> broj;

		while (broj > 0)
		{
			suma += broj % 10;

			broj /= 10;
		}

		cout << "\nZbirot na cifirte od brojot iznesuva : " << suma << endl;


	cin.get(); cin.get();

	return 0;

}