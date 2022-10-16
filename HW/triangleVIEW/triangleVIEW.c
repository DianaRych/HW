#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("Введите стороны треугольника\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("треугольник равносторонний\n");
	}
	if (a == b && b != c || b == c && c != a || a == c && c != b) {
		printf("треугольник равнобедренный\n");
	}
	if (pow(c, 2) == a * a + b * b || a * a == pow(c, 2) + b * b || b * b == a * a + pow(c, 2)) {
		printf("треугольник прямоугольный\n");
	}
	if (a != b && b != c) {
		printf("треугольник произвольный\n");
	}
	if (a + b < c || b + c < a || c + a < b) {
		printf("не является треугольником\n");
	}
	system("pause");
	return 0;
}