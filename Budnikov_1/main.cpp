#include <iostream> // для cout
#include <iomanip> //Для setw

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int a = 0;
	int a2 = 0;
	int a3 = 0;

	cout << "Таблица кубов чисел a от 1 до 10\n";
	
	while (a < 10)
	{
		a++;
		a2 = a * a;
		a3 = a * a * a;
		cout << setw(4) << a2 << " " << setw(4) << a3 << "\n";
	}

	return 0;
}
