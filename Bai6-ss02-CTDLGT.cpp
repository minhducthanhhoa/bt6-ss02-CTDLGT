#include<stdio.h>

int main(){
	int n, m;

    // Nhap so phan tu cua mang 1
    do {
        printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    int arr1[n];

    // Nhap các phan tu cua mang 1
    if (n > 0) {
        printf("Nhap %d phan tu cua mang 1:\n", n);
        for (int i = 0; i < n; i++) {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &arr1[i]);
        }
    }

    // Nhap so phan tu cua mang 2
    do {
        printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
        scanf("%d", &m);
    } while (m < 0 || m > 1000);

    int arr2[m];

    // Nhap các phan tu cua mang 2
    if (m > 0) {
        printf("Nhap %d phan tu cua mang 2:\n", m);
        for (int i = 0; i < m; i++) {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &arr2[i]);
        }
    }

    // Gop hai mang
    int mergedArray[n + m];
    for (int i = 0; i < n; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        mergedArray[n + i] = arr2[i];
    }

    // In mang dã gop
    printf("Mang sau khi gop:\n[");
    for (int i = 0; i < n + m; i++) {
        printf("%d", mergedArray[i]);
        if (i < n + m - 1) {
            printf(", ");
        }
    }
    printf("]\n");

	return 0;
}

