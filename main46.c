#include <stdio.h>
int  main() {
	int temp, i,sum= 0;
	for (int i = 1; i <= 99; i = i + 2) {
		temp = i * (i + 1) * (i + 2);
		sum = sum + temp;
	}
	printf("%d", sum);

	return 0;
}