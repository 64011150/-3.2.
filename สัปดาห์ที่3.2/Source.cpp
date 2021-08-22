#include<stdio.h>
int main() {
	int a;
	int b = 1;
	scanf_s("%d", &a);
	while (b <= a) {
		printf("*");
		b = b + 1;
	}
	return 0;
}