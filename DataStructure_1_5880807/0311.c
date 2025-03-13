#include <stdio.h>

int main() {
	unsigned int n;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);//정수 입력
	printf("입력된 정수의 32비트 표현: ");
	for (int i = 31; i >= 0; --i) {
		int m = n >> i & 1;
		printf("%d", m);
	}//입력된 정수를 32비트로 표현하는 과정
}