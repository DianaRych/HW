#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("������� ������� ������������\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("����������� ��������������\n");
	}
	if (a == b && b != c || b == c && c != a || a == c && c != b) {
		printf("����������� ��������������\n");
	}
	if (pow(c, 2) == a * a + b * b || a * a == pow(c, 2) + b * b || b * b == a * a + pow(c, 2)) {
		printf("����������� �������������\n");
	}
	if (a != b && b != c) {
		printf("����������� ������������\n");
	}
	if (a + b < c || b + c < a || c + a < b) {
		printf("�� �������� �������������\n");
	}
	system("pause");
	return 0;
}