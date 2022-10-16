#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x, y, sum, raz, pro, ost;
	float cha, srkv, srm;
	printf("¬ведите числа: ");
	scanf_s("%d %d", &x, &y);
	sum = x + y;
	raz = x - y;
	pro = x * y;
	cha = (float)x / y;
	srkv = 1.0 * (pow(x, 2) + pow(y, 2)) / 2;
	srm = 1.0 * (abs(x) + abs(y)) / 2;
	ost = x % y;
	printf("%d %d %d %.2f %.2f %.2f %d\n", sum, raz, pro, cha, srkv, srm, ost);
	system("pause");
	return 0;
}