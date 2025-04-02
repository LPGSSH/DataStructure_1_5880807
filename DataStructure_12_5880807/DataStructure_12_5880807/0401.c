#include <stdio.h>

int fibo_rec(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return(fibo_rec(n - 1) + fibo_rec(n - 2));
}

int fibo_itr(int n) {
	int f_n_2 = 0;
	int f_n_1 = 1;
	int f_n;
	for (int i = 2; i <= n; i++) {
		f_n = f_n_1 + f_n_2;
		f_n_2 = f_n_1;
		f_n_1 = f_n;
	}
	if (n == 0) return f_n_2;
	else if (n == 1) return f_n_1;
	else return f_n;
}

int main() {
	int num, m;
	while (1) {
		printf("�Ǻ���ġ ���� ��� ����(1: �����, 2: ��ȯ��, 0: ����): ");
		scanf_s("%d", &m);
		if (m == 0) {
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			break;
		}
		else if (m == 1) {
			printf("���� N�� �Է��ϼ���(�����Ϸ��� 0 �Է�) ");
			scanf_s("%d", &num);
			if (num == 0) {
				printf("���α׷��� ����Ǿ����ϴ�.\n");
				break;
			}
			printf("F(%d) = %d(����� ���)\n", num, fibo_rec(num));
		}
		else if (m == 2) {
			printf("���� N�� �Է��ϼ���(�����Ϸ��� 0 �Է�) ");
			scanf_s("%d", &num);
			if (num == 0) {
				printf("���α׷��� ����Ǿ����ϴ�.\n");
				break;
			}
			printf("F(%d) = %d(��ȯ�� ���)\n", num, fibo_itr(num));
		}
		else
			printf("�߸��� �Է��Դϴ�.\n");
	}

	return 0;
}