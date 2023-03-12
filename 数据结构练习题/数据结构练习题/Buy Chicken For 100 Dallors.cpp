#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int x, y, z;              
	for (x = 0; x <= 20; x++) {
		for (y = 0; y <= 33; y++) {
			z = 100 - x - y;
			if (z % 3 == 0 && (5 * x + 3 * y + z / 3) == 100) {    
				printf("¹«¼¦£¬Ä¸¼¦£¬Ð¡¼¦Êý£º%d %d %d\n", x, y, z);
			}
		}
	}
}
