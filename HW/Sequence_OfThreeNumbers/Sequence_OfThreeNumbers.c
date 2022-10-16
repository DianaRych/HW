#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x;
	printf("¬ведите переменную: ");
	scanf_s("%d", &x);
	printf("1: %d\n", x);
	x = x + 1;
	printf("2: %d\n", x);
	x = x + 1;
	printf("3: %d\n", x);
	system("pause");
	return 0;
}