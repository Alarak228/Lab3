#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float num;
	int year;
	cout << "Введите сумму вклада: ";
	cin >> num;
	system("cls");
	cout << "Время хранения вклада: ";
	cin >> year;
	system("cls");
	cout << "Сумма в начале: " << num << endl;
	cout << "Время хранения вклада:" << year << endl;
	cout << endl;
	cout << "Сумма в конце хранения вклада: " << num + (num*(year*0.03));
}
