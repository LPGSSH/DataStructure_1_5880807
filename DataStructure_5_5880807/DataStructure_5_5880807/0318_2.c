#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
} Calculator;

int add(Calculator cal) { return cal.x + cal.y; }//x + y의 값을 리턴
int sub(Calculator cal) { return cal.x - cal.y; }//x - y의 값을 리턴
int mul(Calculator cal) { return cal.x * cal.y; }//x * y의 값을 리턴
int div(Calculator cal) { return cal.x / cal.y; }//x / y의 값을 리턴

int main() {
	Calculator cal;
	char c;
	printf("수식 입력: ");
	scanf("%d %c %d", &cal.x, &c, &cal.y);

	if (c == '+')//c가 '+'인 경우
		printf("%d + %d = %d", cal.x, cal.y, add(cal));//a + b의 값을 출력
	else if(c == '-')//c가 '-'인 경우
		printf("%d - %d = %d", cal.x, cal.y, sub(cal));//a - b의 값을 출력
	else if(c == '*')//c가 '*'인 경우
		printf("%d * %d = %d", cal.x, cal.y, mul(cal));//a * b의 값을 출력
	else if(c == '/')//c가 '/'인 경우
		printf("%d / %d = %d", cal.x, cal.y, div(cal));//a / b의 값을 출력

	return 0;
}