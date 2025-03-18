#include <stdio.h>
//j for문에서 j는 2부터 i-1까지 포함된다. 만약 i와 j의 나머지 값이 0이면 2와 i-1 사이에 
//i와 나누어지는 값이 있다는 의미이므로 i는 소수가 아니다. 만약 j for문을 나온 후에 i와 j의 값이
//같다면 2와 i-1 사이에 i와 나누어지는 값이 없다는 의미이므로 i는 소수이다.

int main() {
	int num;
	int i, j = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	printf("%d 이하의 소수: ", num);
	for (i = 2; i <= num; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (i == j) printf("%d ", i);
	}

	return 0;
}