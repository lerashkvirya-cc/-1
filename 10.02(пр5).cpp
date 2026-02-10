#include <iostream>
using namespace std;
int main(){
	setlocale(0, "");
	double num1, num2;
	char op;
	cout << "выберите операцию: ";
	cin >> op;
	cout << "введите два числа: ";
	cin >> num1 >> num2;
	if (op == '+') {
		cout << "результат: " << num1 << "+" << num2 << "=" << num1 + num2;
	}
	else if (op == '-') {
		cout << "результат" << num1 << "-" << num2 << "=" << num1 - num2;
	}
	else if (op == '*') {
		cout << "результат" << num1 << "*" << num2 << "=" << num1 * num2;
	}
	else if (op == '/') {
		if (num2 == 0)cout << "делить на 0 нельзя.";
		else cout << "результат" << num1 << "/" << num2 << "=" << num1 / num2;
	}
	else if (op == '/') {
		if ((int)num2 == 0)cout << "делить на 0 нельзя.";
		else cout << "результат" << (int)num1 << "%" << (int)num2 << "=" << ((int)num1 % (int)num2);
	}
	else {
		cout << "неверная операция.";
	}
	return 0;
	int _; cin >> _;
}
