#define _CRT_SECURE_NO_WARNINGS

//4.5
#include <stdio.h>

int YES_OR_NO_RUNYEAR(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int monnumPing(int mon) {
	switch (mon) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		return 28;
		break;
	default:
		printf("输入错误");
	}
}
int monnumRun(int mon) {
	switch (mon) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		return 29;
		break;
	default:
		printf("输入错误");
	}
}
int main() {
	//get inf
	printf("输入年：");
	int year;
	scanf("%d", &year);
	printf("输入月：");
	int month;
	scanf("%d", &month);
	if (month <= 0 || month >= 13) {
		printf("输入 错误");
	}
	else {
		//judge yesno runyear
		int result = YES_OR_NO_RUNYEAR(year);
		if (result == 1) {
			int days = monnumRun(month);
			printf("这个月共有%d天", days);
		}
		else {
			int days = monnumPing(month);
			printf("这个月共有%d天", days);
		}
	}

	return 0;
}