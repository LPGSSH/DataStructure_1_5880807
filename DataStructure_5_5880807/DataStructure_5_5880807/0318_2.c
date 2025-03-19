#include <stdio.h>

int add(int x, int y);//덧셈 함수
int subtract(int x, int y);//뺄셈 함수
int multiply(int x, int y);//곱셈 함수
float divide(int x, int y);//나눗셈 함수

int main() {
	int a, b;
	printf("첫 번째 양의 정수를 입력하세요: ");
	scanf_s("%d", &a);
	printf("두 번째 양의 정수를 입력하세요: ");
	scanf_s("%d", &b);

	printf("덧셈: %d\n", add(a, b));//a + b의 값을 출력
	printf("뺄셈: %d\n", subtract(a, b));//a - b의 값을 출력
	printf("곱셈: %d\n", multiply(a, b));//a * b의 값을 출력
	printf("나눗셈: %.2f\n", divide(a, b));//a / b의 값을 출력

	return 0;
}

int add(int x, int y) { return x + y; }//x + y의 값을 리턴
int subtract(int x, int y) { return x - y; }//x - y의 값을 리턴
int multiply(int x, int y) { return x * y; }//x * y의 값을 리턴
float divide(int x, int y) { return (float)x / y; }//x / y의 값을 리턴