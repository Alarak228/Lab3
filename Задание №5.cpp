#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int num1;
	cout << "Введите высоту: ";
	cin >> num1;
	system("cls");
	for (int num2 = 0; num2 < num1;num2++) {
		for (int num3 = 1; num3 < num1 - num2;num3++) {
			cout<<" ";
		}
		for (int num3 = num1 - num2 * 2; num3 <= num1;num3++) {
			cout<<"*";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Высота = " << num1;
	return 0;
}