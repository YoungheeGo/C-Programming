# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	char a[20];
	scanf("%s", &a); //변수 입력할꺼면 선언한 바로 다음에 scanf 넣어야하는듯
	int cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (a[i] == 'l') cnt++;
	}
	printf("당신의 단어는 %s 입니다. \n", a);
	printf("l의 개수는 %d 개 입니다 \n", cnt);
	system("pause");
	return 0;
}