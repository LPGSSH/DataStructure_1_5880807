#include <stdio.h>

int main() {
	unsigned int n;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &n);
	printf("�Էµ� ������ 32��Ʈ ǥ��: ");
	for (int i = 31; i >= 0; --i) {
		int m = n >> i & 1;
		printf("%d", m);
	}
}