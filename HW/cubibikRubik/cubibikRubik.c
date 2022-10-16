#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, Sbok, Spov, V;
	scanf_s("%d", &a);
	printf("Ввод: %d\n", a);
	V = pow(a, 3);
	Sbok = pow(a, 2) * 4;
	Spov = pow(a, 2) * 6;
	printf("Результат:\n");
	printf("Объем = %d\n", V);
	printf("Площадь полной поверхности = %d\n", Spov);
	printf("Площадь боковой поверхности = %d\n", Sbok);
	system("pause");
	return 0;
}
