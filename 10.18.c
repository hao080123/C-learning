//洛谷P5718找最小值 2026.10,18
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n;
	scanf_s("%d", &n);
	int a, b;
	scanf_s("%d", &a);
	for (int i = 1;i < n;i++) {
		scanf_s("%d ", &b);
		if (a > b) {
			
			a = b;
		}
		
	}printf("%d\n", a);
	return 0;
}
