#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int exam1, exam2, exam3;
	printf("Введите ваши оценки\n");
	scanf_s("%d %d %d", &exam1, &exam2, &exam3);
	if (exam1 == 5 && exam2 == 5 && exam3 == 5) {
		printF("Поздравляем, Вы отличник!\n");
	}
	else if (exam1 + exam2 + exam3 == 14 || exam1 + exam2 + exam3 == 13) {
		printF("Поздравляем, Вы хорошист!\n");
	}
	else if (exam1 == 3 || exam2 == 3 || exam3 == 3) {
		printf("Поздравляем, Вы троечник!\n");
	}
	else if (exam1 < 3 || exam2 < 3 || exam3 < 3) {
		printF("Поздравляем, Вы не сдали!\n");
	}
	system("pause");
	return 0;
}