#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
//int A[50];
void swap(int* A, int i, int j) {
	int tmp = A[i];
	A[i] = A[j];
	A[j] = tmp;
}
int pros(int i, int n,int * A) {
	while ((2 * i) <= n-1) {
		int r = 2*i;
		if ((r + 1 <= n-1) and (A[r] < A[r + 1])) {
			r = r + 1;
		}
		if (A[i] < A[r]) {
			swap(A, i, r);
				i = r;
		}
		else {
			return 0;
		}

	}
}
int main() {
	system("chcp 1251");
	system("cls");
	srand(time(NULL));
	int n;
	scanf("%d", &n);
	int* A;
	A = (int*)malloc(n * sizeof(int));
	for (int i1 = 0; i1 < n; i1++) {
		int u = 1 + rand() % 99;
		A[i1] = u;
		printf("%d ", A[i1]);
	}
	printf("\n");
	//построение 
	int i;
	i = n / 2;
	while (i >= 0) {
		pros(i,n,A);
		i = i - 1;

	}
	for (int i1 = 0; i1 < n; i1++) {
		printf("%d ", A[i1]);
	}
	printf("\n");
	//сортировка
	i = n-1;
	printf("Сортирорвка:");
	printf("\n");
	while (i > 1) {
		swap(A,i,0);
		i = i - 1;
		for (int i1 = 0; i1 < n; i1++) {
			printf("%d ", A[i1]);
		}
		printf("\n");
		pros(0, i, A);
		printf("1 :\n");
		for (int i1 = 0; i1 < n; i1++) {
			printf("%d ", A[i1]);
		}
		printf("\n");
		printf("\n");
	}
	for (int i1 = 0; i1 < n; i1++) {
		printf("%d ", A[i1]);
	}
	free(A);
}