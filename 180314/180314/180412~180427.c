#include <stdio.h>

int main_exit4() {
	int n, i = 1;
	scanf_s("%d", &n);

	while (1) {
		i++;
		if (n == 1) {
			printf("�Ҽ��� �ƴϴ�."); break;
		}
		if (n == i) {
			printf("�Ҽ��̴�."); break;
		} else if (n % i == 0) {
			printf("�Ҽ��� �ƴϴ�."); break;
		}
	}
}