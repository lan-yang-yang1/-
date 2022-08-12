#include <stdio.h>
#include "max.h"
#include "main.h"
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996);
int main()
{
	FILE* fp = fopen("12.in", "w+");
	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n", num);
		fclose(fp);
	}
	else {
		printf("无法打开文件\n");
	}


	printf("max=%-9d\n", max(5, aa));


	return 0;
}