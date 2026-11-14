#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main() {
	printf("ÊäÈëa:");
	long long a, n = 0;
	scanf("%lld", &a);
	printf("ÊäÈën:");
	scanf("%lld", &n);
	long long temp = 0;
	long long sum = 0;
	for (n;n > 0;n--) {
		temp = a*((long long)pow(10,n)/9);
		printf("%lld\n", temp);
		sum += temp;
	}
	printf("%lld", sum);
	return 0;
}