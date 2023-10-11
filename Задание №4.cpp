#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
    float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	do
	{
		cout << "Число " << num1 + 1 << " = ";
		cin >> num2;
		if(num2){
			num1++;
			num3 += num2;
		}
	} while (num2);
	cout << "Кол-во введенных чисел: " << num1 + 1 << endl;
	cout << "Общая сумма: " << num3 << endl;
	cout << "Среднее арифметическое число: " << num3 / (num1 + 1) << endl;
	
}
