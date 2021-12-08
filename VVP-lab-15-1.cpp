#include <iostream>
#include <math.h>
using namespace std;

int Power(int A) {
	A = pow(A, 3);
	return A;
}
void main() {
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "Задача 1. \nОписать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в \nпеременной B (A — входной, B — выходной параметр; оба параметра являются вещественными). \nС помощью этой функции найти третьи степени пяти данных чисел." << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Введите А: "; cin >> A;
		B = Power(A);
		cout << B << endl;
	}
}
