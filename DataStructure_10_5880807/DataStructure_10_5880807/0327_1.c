#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2;
	printf("�迭�� ũ�⸦ �Է��ϼ���(N x N): ");
	scanf_s("%d %d", &n1, &n2);

	int** arr1 = (int**)malloc(sizeof(int*) * n1);
	int** arr2 = (int**)malloc(sizeof(int*) * n1);
	for (int i = 0; i < n1; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * n2);
		arr2[i] = (int*)malloc(sizeof(int) * n2);
	}

	printf("ù ��° %dx%d ��� �Է�: \n", n1, n2);
	for (int j = 0; j < n1; j++) {
		for (int k = 0; k < n2; k++)
			scanf_s("%d", &arr1[j][k]);
	}
	printf("�� ��° %dx%d ��� �Է�: \n", n1, n2);
	for (int p = 0; p < n1; p++) {
		for (int q = 0; q < n2; q++)
			scanf_s("%d", &arr2[p][q]);
	}

	printf("��� ���� ���: \n");
	for (int x = 0; x < n1; x++) {
		for (int y = 0; y < n2; y++)
			printf("%d ", arr1[x][y] + arr2[x][y]);
		printf("\n");
	}

	return 0;
}