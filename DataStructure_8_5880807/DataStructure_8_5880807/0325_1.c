//arr1[2][2] 및 arr2[2][2] 생성
//arr1[0][0]과 arr1[0][1]의 값을 입력함
//arr1[1][0]과 arr1[1][1]의 값을 입력함
//arr2[0][0]과 arr2[0][1]의 값을 입력함
//arr2[1][0]과 arr2[1][1]의 값을 입력함
//arr1[0][0]과 arr2[0][0]의 값의 합과 arr1[0][1]과 arr2[0][1]의 값의 합을 출력함
//arr1[1][0]과 arr2[1][0]의 값의 합과 arr1[1][1]과 arr2[1][1]의 값의 합을 출력함
#include <stdio.h>

int main() {
	int arr1[2][2];
	int arr2[2][2];
	printf("첫 번째 2x2 행렬 입력: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			scanf_s("%d", &arr1[i][j]);
	}
	printf("두 번째 2x2 행렬 입력: \n");
	for (int p = 0; p < 2; p++) {
		for (int q = 0; q < 2; q++)
			scanf_s("%d", &arr2[p][q]);
	}

	printf("행렬 덧셈 결과: \n");
	for (int s = 0; s < 2; s++)
		printf("%d ", arr1[0][s] + arr2[0][s]);
	printf("\n");
	for(int t = 0; t < 2; t++)
		printf("%d ", arr1[1][t] + arr2[1][t]);

	return 0;
}