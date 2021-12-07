#include <iostream>
using namespace std;


int Quarter(int x, int y) {
	int CH;
	if (x > 0 && y > 0) {
		CH = 1;
		return CH;
	}
	else if (x < 0 && y > 0) {
		CH = 2;
		return CH;
	}
	else if (x < 0 && y < 0) {
		CH = 3;
		return CH;
	}
	else {
		CH = 4;
		return CH;
	}
}
void main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 4. \nОписать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, \nв которой находится точка с ненулевыми вещественными координатами (x, y). \nС помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами" << endl;
	int x, y, CH;
	for (int i = 0; i < 3; i++) {
		cout << "Введите координату x(не может быть равно нулю): "; cin >> x;
		cout << "Введите координату y(не может быть равно нулю): "; cin >> y;
		CH = Quarter(x, y);
		if (CH == 1) {
			cout << "Точка находится в I четверти." << endl;
		}
		else if (CH == 2) {
			cout << "Точка находится во II четверти." << endl;
		}
		else if (CH == 3) {
			cout << "Точка находится в III четверти." << endl;
		}
		else if (CH == 4) {
			cout << "Точка находится в IV четверти." << endl;
		}
	}
}
