#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
	double a, b;
	char c;
	printf("����� ������ �Է��ϼ���(��: 3 + 5, 4 * 2): ");
	scanf("%lf %c %lf", &a, &c, &b);

	if(c == '+')
		printf("���: %.2lf\n", add(a, b));
	else if(c == '-')
		printf("���: %.2lf\n", subtract(a, b));
	else if(c == '*')
		printf("���: %.2lf\n", multiply(a, b));
	else if(c == '/')
		printf("���: %.2lf\n", divide(a, b));

	return 0;
}

double add(double x, double y) { return x + y; }
double subtract(double x, double y) { return x - y; }
double multiply(double x, double y) { return x * y; }
double divide(double x, double y) { return x / y; }