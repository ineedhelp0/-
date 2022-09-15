#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
int main() {
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
	for (int i = 0; i < b; i++) {
		printf("%d ", q[i]);
	}
	printf("\n");
	int k, j, m, left, right, x,f;
	for (k = 1; k <b; k++)
	{
		printf("k = %d\n", k);
		x = q[k]; left = 0; right = k;
		printf("x = %d\n", x);
		while (left < right)
		{
			m = (left + right) / 2;
			printf("left0 = %d\n", left);
			printf("right0 = %d\n", right);
			printf("m = %d\n", m);
			printf("q[m] = %d\n", q[m]);
			if (q[m] <= x) {
				left = m + 1;
				printf("left1 = %d\n", left);
				printf("right1 = %d\n", right);
			}
			else {
				right = m;
				printf("left2 = %d\n", left);
				printf("right2 = %d\n", right);
			}
		}
		for (j = k; j > right;) {
			q[j--] = q[j - 1];
		}
		q[right] = x;
	}
	for (int i = 0; i < b; i++) {
		printf("%d ", q[i]);
	}


}