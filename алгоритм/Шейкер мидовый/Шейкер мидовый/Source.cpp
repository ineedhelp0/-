#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
int main() {
	int po = 1;
	system("chcp 1251");
	system("cls");
	int b;
	printf("Введите кол-во элементов\n");
	scanf("%d", &b);
	int* q;
	q = (int*)malloc(b * sizeof(int));
	printf("Введите цифры:\n");
	for (int i = 0; i < b; i++) {
		int t;
		scanf("%d", &t);
		q[i] = t;

	}
	printf("Начало |");
	for (int i = 0; i < b; i++) {
		printf("%d ", q[i]);
	}
	printf("\n");
		int left = 0;
		int right = b - 1;
		bool F = true;
		while (F == true) {
			F = false;
			int i = left;
			while (i < right) {
				if (q[i] > q[i + 1]) {
					int tmp = q[i + 1];
					q[i + 1] = q[i];
					q[i] = tmp;
					F = true;
				}
				i = i + 1;
			}
			right = right - 1;
			for (int i = 0; i < b; i++) {
				printf("%d ", q[i]);
			}
			printf("\n");
			if (F == true) {
				F = false;
				i = right;
				while (i > left) {
					if (q[i] < q[i - 1]) {
						int f = q[i - 1];
						q[i - 1] = q[i];
						q[i] = f;
						F = true;
					}
					i = i - 1;
				}
			}
			left = left + 1;
			for (int i = 0; i < b; i++) {
				printf("%d ", q[i]);
			}
			printf("\n");
		}
		for (int i = 0; i < b; i++) {
			printf("%d ", q[i]);
		}
		printf("\n");
		po++;
	}