//�Է��� ������ ����(n)�� �Է���
//���� n���� �Է���
//arr[n] ����
//���� arr[j]�� ���� arr[k]�� ������ �۴ٸ�
//arr[j]�� arr[k]�� ���� �ٲ۴�
//������������ ���ĵ� ���� �迭�� �����
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, temp;
	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);

	printf("%d���� ������ �Է��ϼ���: \n", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	printf("������������ ���ĵ� ������: \n");
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (arr[j] < arr[k]) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	for (int m = 0; m < n; m++)
		printf("%d ", arr[m]);

	return 0;
}