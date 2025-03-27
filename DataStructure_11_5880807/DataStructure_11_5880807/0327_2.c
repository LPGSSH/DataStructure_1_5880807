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
	printf("몇명의 학생 정보를 입력하시나요? ");
	scanf("%d", &n);
	Student* s = (Student*)malloc(n * sizeof(Student));

	for (int i = 0; i < n; i++) {
		printf("[%d]학생 정보를 입력하세요(이름 학번 점수): ", i + 1);
		scanf("%s %d %d", s[i].name, &s[i].id, &s[i].score);
	}

	while (1) {
		int inf;
		printf("학번을 입력하세요(0이면 종료) ");
		scanf("%d", &inf);
		if (inf == 0) {
			printf("종료\n");
			break;
		}
		for (int j = 0; j < n; j++) {
			if (inf == s[j].id) {
				printf("%s %d %d\n", s[j].name, s[j].id, s[j].score);
				break;
			}
			if(j == n - 1)
				printf("해당 학번의 학생이 없습니다.\n");
		}
	}

	return 0;
}