# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1); // ����Լ�
}

int main(void) {
	int n;
	printf("n ���丮���� ����մϴ�. ");
	scanf("%d", &n);
	printf("%d \n", factorial(n));
	system("pause");
	return 0;
}