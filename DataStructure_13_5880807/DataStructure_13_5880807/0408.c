#include <stdio.h>

int main() {
	int arr1[6], arr2[6], sum[6];
	printf("행렬을 입력하시오\n");
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &arr1[i]);
	}
	printf("행렬을 입력하시오\n");
	for (int j = 0; j < 6; j++) {
		scanf_s("%d", &arr2[j]);
	}
	for (int k = 0; k < 6; k++)
		sum[k] = arr1[k] + arr2[k];

	printf("두 행렬의 합\n");
	printf("List: size = %d, last = 3\n", 2*2*3);
	printf("Items:\n");
	for (int r = 0; r < 6; r++) {
		printf("%d ", sum[r]);
		if ((r + 1) % 3 == 0)
			printf("\n");
	}

	return 0;
}