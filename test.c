#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() //求一个整数存储在二进制中1的个数（统计num的补码中有几个1） 负数在内存中存储的是 二进制的补码
{
	int num = 0;
	int i = 0;
	int count = 0;
	printf("输入一个数：\n");
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num>>i) & 1))// 0000 0000 0000 0000 0000 0000 0000 0101  按位与 对应的二进制位都为1才为1
		{                      //  0000 0000 0000 0000 0000 0000 0000 0001
			count++;       //  0000 0000 0000 0000 0000 0000 0000 0001
		}
	}
	
	printf("%d\n", count);
	return 0;
}
