#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[30];
	int id;
	int score;
} Student;

int main() {
	int n;
	printf("����� �л� ������ �Է��Ͻó���? ");
	scanf("%d", &n);
	Student* s = (Student*)malloc(n * sizeof(Student));

	for (int i = 0; i < n; i++) {
		printf("[%d]�л� ������ �Է��ϼ���(�̸� �й� ����): ", i + 1);
		scanf("%s %d %d", s[i].name, &s[i].id, &s[i].score);
	}

	while (1) {
		int inf;
		printf("�й��� �Է��ϼ���(0�̸� ����) ");
		scanf("%d", &inf);
		if (inf == 0) {
			printf("����\n");
			break;
		}
		for (int j = 0; j < n; j++) {
			if (inf == s[j].id) {
				printf("%s %d %d\n", s[j].name, s[j].id, s[j].score);
				break;
			}
			if(j == n - 1)
				printf("�ش� �й��� �л��� �����ϴ�.\n");
		}
	}

	return 0;
}