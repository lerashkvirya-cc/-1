#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int n_1 = 22;
	int n_2 = 43;
	int n_3 = 65;
	int n_4 = 13;
	int n_5 = 97;

	cout << "[INT]" << endl;
	cout << "n_1 = " << n_1 << " | тип: int, размер: 4 байта" << endl;
	cout << "n_2 = " << n_2 << " | тип: int, размер: 4 байта" << endl;
	cout << "n_3 = " << n_3 << " | тип: int, размер: 4 байта" << endl;
	cout << "n_4 = " << n_4 << " | тип: int, размер: 4 байта" << endl;
	cout << "n_5 = " << n_5 << " | тип: int, размер: 4 байта" << endl << endl;

	short sh_1 = 11;
	short sh_2 = 12;
	short sh_3 = 13;
	short sh_4 = 14;
	short sh_5 = 15;

	cout << "[SHORT]" << endl;
	cout << "sh_1 = " << sh_1 << " | тип: short, размер: 2 байта" << endl;
	cout << "sh_2 = " << sh_2 << " | тип: short, размер: 2 байта" << endl;
	cout << "sh_3 = " << sh_3 << " | тип: short, размер: 2 байта" << endl;
	cout << "sh_4 = " << sh_4 << " | тип: short, размер: 2 байта" << endl;
	cout << "sh_5 = " << sh_5 << " | тип: short, размер: 2 байта" << endl << endl;

	float f_1 = 1.1;
	float f_2 = 1.2;
	float f_3 = 1.3;
	float f_4 = 1.4;
	float f_5 = 1.5;

	cout << "[FLOAT]" << endl;
	cout << "f_1 = " << f_1 << " | тип: float, размер: 4 байта" << endl;
	cout << "f_2 = " << f_2 << " | тип: float, размер: 4 байта" << endl;
	cout << "f_3 = " << f_3 << " | тип: float, размер: 4 байта" << endl;
	cout << "f_4 = " << f_4 << " | тип: float, размер: 4 байта" << endl;
	cout << "f_5 = " << f_5 << " | тип: float, размер: 4 байта" << endl << endl;

	double d_1 = 11.1;
	double d_2 = 21.2;
	double d_3 = 31.3;
	double d_4 = 41.4;
	double d_5 = 51.5;

	cout << "[DOUBLE]" << endl;
	cout << "d_1 = " << f_1 << " | тип: double, размер: 8 байта" << endl;
	cout << "d_2 = " << f_2 << " | тип: double, размер: 8 байта" << endl;
	cout << "d_3 = " << f_3 << " | тип: double, размер: 8 байта" << endl;
	cout << "d_4 = " << f_4 << " | тип: double, размер: 8 байта" << endl;
	cout << "d_5 = " << f_5 << " | тип: double, размер: 8 байта" << endl << endl;

	char ch_1 = 11.1;
	char ch_2 = 21.2;
	char ch_3 = 31.3;
	char ch_4 = 41.1;
	char ch_5 = 51.5;

	cout << "[CHAR]" << endl;
	cout << "ch_1 = " << ch_1 << " | тип: char, размер: 1 байт" << endl;
	cout << "ch_2 = " << ch_2 << " | тип: char, размер: 1 байта" << endl;
	cout << "ch_3 = " << ch_3 << " | тип: char, размер: 1 байта" << endl;
	cout << "ch_4 = " << ch_4 << " | тип: char, размер: 1 байта" << endl;
	cout << "ch_5 = " << ch_5 << " | тип: char, размер: 1 байта" << endl << endl;

	bool b_1 = true;
	bool b_2 = false;
	bool b_3 = true;
	bool b_4 = false;
	bool b_5 = true;

	cout << "[BOOL]" << endl;
	cout << "b_1 = " << b_1 << " | тип: bool, размер: 1 байт" << endl;
	cout << "b_2 = " << b_2 << " | тип: bool, размер: 1 байт" << endl;
	cout << "b_3 = " << b_3 << " | тип: bool, размер: 1 байт" << endl;
	cout << "b_4 = " << b_4 << " | тип: bool, размер: 1 байт" << endl;
	cout << "b_5 = " << b_5 << " | тип: bool, размер: 1 байт" << endl << endl;

	string s_1 = "a";
	string s_2 = "b";
	string s_3 = "c";
	string s_4 = "d";
	string s_5 = "e";

	cout << "[STRING]" << endl;
	cout << "s_1 = " << s_1 << " | тип: string, размер: 24-28 байта" << endl;
	cout << "s_2 = " << s_2 << " | тип: string, размер: 24-28 байта" << endl;
	cout << "s_3 = " << s_3 << " | тип: string, размер: 24-28 байта" << endl;
	cout << "s_4 = " << s_4 << " | тип: string, размер: 24-28 байта" << endl;
	cout << "s_5 = " << s_5 << " | тип: string, размер: 24-28 байта" << endl << endl;

	int _; cin >> _;
}