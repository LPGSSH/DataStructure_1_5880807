//arr1[2][2] �� arr2[2][2] ����
//arr1[0][0]�� arr1[0][1]�� ���� �Է���
//arr1[1][0]�� arr1[1][1]�� ���� �Է���
//arr2[0][0]�� arr2[0][1]�� ���� �Է���
//arr2[1][0]�� arr2[1][1]�� ���� �Է���
//arr1[0][0]�� arr2[0][0]�� ���� �հ� arr1[0][1]�� arr2[0][1]�� ���� ���� �����
//arr1[1][0]�� arr2[1][0]�� ���� �հ� arr1[1][1]�� arr2[1][1]�� ���� ���� �����
#include <stdio.h>

int main() {
	int arr1[2][2];
	int arr2[2][2];
	printf("ù ��° 2x2 ��� �Է�: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			scanf_s("%d", &arr1[i][j]);
	}
	printf("�� ��° 2x2 ��� �Է�: \n");
	for (int p = 0; p < 2; p++) {
		for (int q = 0; q < 2; q++)
			scanf_s("%d", &arr2[p][q]);
	}

	printf("��� ���� ���: \n");
	for (int s = 0; s < 2; s++)
		printf("%d ", arr1[0][s] + arr2[0][s]);
	printf("\n");
	for(int t = 0; t < 2; t++)
		printf("%d ", arr1[1][t] + arr2[1][t]);

	return 0;
}