#include <stdio.h>

int add(int x, int y);//���� �Լ�
int subtract(int x, int y);//���� �Լ�
int multiply(int x, int y);//���� �Լ�
float divide(int x, int y);//������ �Լ�

int main() {
	int a, b;
	printf("ù ��° ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &a);
	printf("�� ��° ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &b);

	printf("����: %d\n", add(a, b));//a + b�� ���� ���
	printf("����: %d\n", subtract(a, b));//a - b�� ���� ���
	printf("����: %d\n", multiply(a, b));//a * b�� ���� ���
	printf("������: %.2f\n", divide(a, b));//a / b�� ���� ���

	return 0;
}

int add(int x, int y) { return x + y; }//x + y�� ���� ����
int subtract(int x, int y) { return x - y; }//x - y�� ���� ����
int multiply(int x, int y) { return x * y; }//x * y�� ���� ����
float divide(int x, int y) { return (float)x / y; }//x / y�� ���� ����