# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	char a[20];
	scanf("%s", &a); //���� �Է��Ҳ��� ������ �ٷ� ������ scanf �־���ϴµ�
	int cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (a[i] == 'l') cnt++;
	}
	printf("����� �ܾ�� %s �Դϴ�. \n", a);
	printf("l�� ������ %d �� �Դϴ� \n", cnt);
	system("pause");
	return 0;
}