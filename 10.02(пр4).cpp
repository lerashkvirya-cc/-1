#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите число ";
	int number;
	cin >> number;
	int a = 1;
	while (a < 9) {
		cout << "решите пример: " << number << "x" << a << endl;
		int answ;
		cin >> answ;
		if (answ == number * a) {
			cout << "ответ: " << answ << endl;
			cout << "пример решен правильно!" << endl;
			a = a + 1;
		} else {
			cout << "ошибка, решение неверно.";
			return 0;
		}
	}
	int _; cin >> _;
}
