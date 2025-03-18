#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
} Calculator;

int add(Calculator cal) { return cal.x + cal.y; }//x + y�� ���� ����
int sub(Calculator cal) { return cal.x - cal.y; }//x - y�� ���� ����
int mul(Calculator cal) { return cal.x * cal.y; }//x * y�� ���� ����
int div(Calculator cal) { return cal.x / cal.y; }//x / y�� ���� ����

int main() {
	Calculator cal;
	char c;
	printf("���� �Է�: ");
	scanf("%d %c %d", &cal.x, &c, &cal.y);

	if (c == '+')//c�� '+'�� ���
		printf("%d + %d = %d", cal.x, cal.y, add(cal));//a + b�� ���� ���
	else if(c == '-')//c�� '-'�� ���
		printf("%d - %d = %d", cal.x, cal.y, sub(cal));//a - b�� ���� ���
	else if(c == '*')//c�� '*'�� ���
		printf("%d * %d = %d", cal.x, cal.y, mul(cal));//a * b�� ���� ���
	else if(c == '/')//c�� '/'�� ���
		printf("%d / %d = %d", cal.x, cal.y, div(cal));//a / b�� ���� ���

	return 0;
}