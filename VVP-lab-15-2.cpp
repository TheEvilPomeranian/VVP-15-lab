#include <iostream>
using namespace std;


int Sign(int X) {
	if (X < 0) {
		X = -1;
		return X;
	}
	else if (X == 0) {
		X = 0;
		return X;
	}
	else if (X > 0) {
		X = 1;
		return X;
	}
}
void main() {
	setlocale(LC_ALL, "ru");
	int a, b, sum;
	cout << "Задача 2. \nОписать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения: \n-1, если X < 0; 0, если X = 0; 1, если X > 0. \nС помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B." << endl;
	cout << "Введите число A: "; cin >> a;
	cout << "Введите число B: "; cin >> b;
	sum = Sign(a) + Sign(b);
	cout << "Значение выражения Sign(A) + Sign(B): " << sum << endl;
}
