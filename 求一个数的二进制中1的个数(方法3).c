#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_bite_1(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n&(n - 1); // 13-1101 & 12=1100 =1100  1100=12  1100 & 1011(11)= 1000 1000 = 8 1000 & 0111(7)= 0000
			count++;  // ÿ�ΰ�λ����ȥ������1
	}
	return count;
}
int main()//��һ�����Ķ�������1�ĸ���
{
	int n = 0;
	scanf("%d", &n);
	int count=count_bite_1(n);
	printf("%d", count);
	return 0;
}