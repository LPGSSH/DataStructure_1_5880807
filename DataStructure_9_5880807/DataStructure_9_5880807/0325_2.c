//입력할 정수의 개수(n)를 입력함
//정수 n개를 입력함
//arr[n] 생성
//만약 arr[j]의 값이 arr[k]의 값보다 작다면
//arr[j]와 arr[k]의 값을 바꾼다
//오름차순으로 정렬된 정수 배열을 출력함
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, temp;
	printf("정수의 개수를 입력하세요: ");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);

	printf("%d개의 정수를 입력하세요: \n", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

	printf("오름차순으로 정렬된 정수들: \n");
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