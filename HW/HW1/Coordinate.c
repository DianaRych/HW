#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x1, x2, x3, y1, y2, y3, P, a, b, c;
	float S, p;
	printf("Введите координаты треугольника: ");
	scanf_s("(%d, %d) (%d, %d) (%d, %d)", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	P = a + b + c;
	p = 1.0 * P / 2;
	S = 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Периметр треугольника равен: %d\nПлощадь треугольника равна: %.2f\n", P, S);
	system("pause");
	return 0;
}
