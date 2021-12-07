#include <iostream>
#include <math.h>
using namespace std;

float RingS(float R1, float R2) {
	float S1, S2, S;
	if (R1 > R2 && R1 > 0 && R2 > 0) {
		S1 = 3.14 * pow(R1, 2);
		S2 = 3.14 * pow(R2, 2);
		S = S1 - S2;
	}
	else {
		cout << "Введины неверные значения!" << endl;
	}
	return S;
}
void main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 3. \nОписать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, \nзаключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). \nС ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы." << endl;
	float R1, R2, S;
	for (int i = 0; i < 3; i++) {
		cout << "Введите R1: "; cin >> R1;
		cout << "Введите R2: "; cin >> R2;
		S = RingS(R1, R2);
		cout << "Площадь искомого кольца: " << S << endl;
	}
}
