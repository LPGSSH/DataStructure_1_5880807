/*정수를 입력받는다.
  입력 받은 정수로 i for문을 시작한다.
  정해진 i의 범위를 토대로 j for문을 시작한다.
  만약 j for문에서 i와 j의 값이 같으면
  2와 i-1 사이에 i와 나누어 떨어지는 값이 있으므로 i는 소수가 아니다.
  j for문을 빠져나온다.
  만약 j for문을 나온 후에 i와 j의 값이 같으면
  2와 i-1 사이에 i와 나누어 떨어지는 값이 없으므로 i는 소수이고
  이 경우 i의 값을 출력한다.*/
#include <stdio.h>

int main() {
	int num;
	int i, j = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	printf("%d 이하의 소수: ", num);
	for (i = 2; i <= num; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (i == j) printf("%d ", i);
	}

	return 0;
}