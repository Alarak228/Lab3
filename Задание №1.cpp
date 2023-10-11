#include <iostream>
using namespace std;

int main()
{
	int num;
	float mer;
	setlocale(0, "");
	cout << "[1] Саженей в метры" << endl;
	cout << "[2] Из дюймов в сантиметры" << endl;
	cout << "[3] Футы в метры" << endl;
	cout << "[4] Драхмы в граммы" << endl;
	cout << "[5] Унций в граммы" << endl;
	cout << "[6] Фунты в килограммы" << endl;
	cout << "[7] Аршинов в метры" << endl;
	cout << "[8] Золотников в граммы" << endl;
	cout << "[9] Дюймы в милиметры" << endl;
	cout << endl;
	cout << "[10] Выход";
	cout<<endl;
	cout << "Введите меру длинны: ";
	cin >> num;
	system("cls");
	switch (num)
	{
	case(1):
		cout << "Введите сколько саженей перевести в метры: ";
			cin >> mer;
			system("cls");
			cout << mer << " саженей = " << mer * 2.1366 << " метров";
			break;
	case(2):
		cout << "Введите сколько дюймов перевести в сантиметры: ";
		cin >> mer;
		system("cls");
		cout << mer << " дюймов = " << mer * 2.5 << " сантиметров";
		break;
	case(3):
		cout << "Введите сколько футов перевести в метры: ";
		cin >> mer;
		system("cls");
		cout << mer << " футов = " << mer * 0.3048 << " метров";
		break;
	case(4):
		cout << "Введите сколько драхм перевести в граммы: ";
		cin >> mer;
		system("cls");
		cout << mer << " драхм = " << mer * 3.7325 << " грамм";
		break;
	case(5):
		cout << "Введите сколько унций перевести в граммы: ";
		cin >> mer;
		system("cls");
		cout << mer << " унций = " << mer * 29.86 << " граммы";
		break;
	case(6):
		cout << "Введите сколько фунтов перевести в килограммы: ";
		cin >> mer;
		system("cls");
		cout << mer << " фунтов = " << mer * 0.40951 << " килограмм";
		break;
	case(7):
		cout << "Введите сколько аршин перевести в метры: ";
		cin >> mer;
		system("cls");
		cout << mer << " аршин = " << mer * 0.7112 << " метров";
		break;
	case(8):
		cout << "Введите сколько золотников перевести в граммы: ";
		cin >> mer;
		system("cls");
		cout << mer << " золотников = " << mer * 4.2657 << " граммы";
		break;
	case(9):
		cout << "Введите сколько дюймов перевести в милиметры: ";
		cin >> mer;
		system("cls");
		cout << mer << " дюймов = " << mer * 25.3995 << " милиметры";
		break;
	case(10):
		cout << "Выход";
		return 0;
	default:
		cout << "Вы ввели некоректное значение!";
		break;
	}
}
