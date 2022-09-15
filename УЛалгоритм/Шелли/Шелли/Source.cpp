#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
void mas5(int n, int A[]) {
    printf("1 подмассив :");
    for (int i = 0; i < n;) {
        printf("%d ", A[i]);
        i = i + 5;
    }
    printf("\n");
    printf("2 подмассив :");
    for (int i = 1; i < n;) {
        printf("%d ", A[i]);
        i = i + 5;
    }
    printf("\n");
    printf("3 подмассив :");
    for (int i = 2; i < n;) {
        printf("%d ", A[i]);
        i = i + 5;
    }
    printf("\n");
    printf("4 подмассив :");
    for (int i = 3; i < n; ) {
        printf("%d ", A[i]);
        i = i + 5;
    }
    printf("\n");
    printf("5 подмассив :");
    for (int i = 4; i < n;) {
        printf("%d ", A[i]);
        i = i + 5;
    }
    printf("\n");

}
void mas3(int n, int A[]) {
    printf("1 подмассив :");
    for (int i = 0; i < n;) {
        printf("%d ", A[i]);
        i = i + 3;
    }
    printf("\n");
    printf("2 подмассив :");
    for (int i = 1; i < n;) {
        printf("%d ", A[i]);
        i = i + 3;
    }
    printf("\n");
    printf("3 подмассив :");
    for (int i = 2; i < n;) {
        printf("%d ", A[i]);
        i = i + 3;
    }
    printf("\n");
}
void mas1(int n, int A[]) {
    printf("1 подмассив :");
    for (int i = 0; i < n;) {
        printf("%d ", A[i]);
        i = i + 1;
    }
    printf("\n");
}
int main() {
    system("chcp 1251");
    system("cls");
	int*A;
    int n;
    srand(time(NULL));
    scanf("%d", &n);
    A = (int*)malloc(n * sizeof(int));
	for (int i1 = 0; i1 < n; i1++) {
        int u = 1 + rand() % 99;
        A[i1] = u;
		printf("%d ", A[i1]);
	}
    printf("\n");
    mas5(n,A);
    bool F;
    int i, j,b = 0;
    int h;
    int tmp;
    //for (h = n / 2; h > 0; h /= 2)
    for (h = 5; h > 0; h -= 2) {
        if (h == 3) {
            mas3(n, A);
        }
        if (h == 1) {
            mas1(n, A);
        }
        i = h;
        while (i <= n-1) {
            F = false;
            tmp = A[i];
            //printf("tmp = %d\n", tmp);
            j = i - h;
            //printf("j = %d\n", j);
            while ((j >= b) and( A[j] > tmp)) {
                F = true;
                //printf("AJ = %d\n", A[j]);
                //printf("AJ+h = %d\n", A[j+h]);
                A[j + h] = A[j];
                j = j - h;
            }
            if (F == true) {
                A[j + h] = tmp;
            }
            i = i + h;
        }
        for (int i1 = 0; i1 < n; i1++) {
            printf("%d ", A[i1]);
        }
        printf("\n");
    }
}