#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main() {
	int num = 0;
	printf("输入三位数：");
	scanf("%d", &num);
	if (num <= 99 || num >= 1000) {
		printf("输入错误");
	}
	else {
		int a, b, c = 0;
		a = num / 100;
		c = num % 10;
		b = (num - c - 100*a)/10;
		if (num == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
			printf("是水仙花数");
		}
		else
		{
			printf("不是水仙花数");
		}
	}
	return 0;
}