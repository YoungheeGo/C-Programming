#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("���� �Է��ϼ���: ");
	int month;
	scanf("%d", &month);
	switch (month) {
	case 1:
	case 2: 
	case 3:
		printf("��\n"); 
		break;
	case 4:
	case 5: 
	case 6: 
	case 7:
		printf("����\n"); 
		break;
	case 8:
	case 9: 
	case 10:
		printf("����\n"); 
		break;
	case 11: 
	case 12:
		printf("�ܿ�\n"); 
		break;
	}
	system("pause");
	return 0;
}