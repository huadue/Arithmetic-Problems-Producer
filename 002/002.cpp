// 002.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<windows.h> 
#include <stdlib.h>
#include <time.h>
void start(int n,int m) {
	int i = 1; 
	srand(time(NULL));
	for (; i <= n; i++) {
		
		int a = rand(), b = rand(), k = rand();
		a = a % m; b = b % m; k = k % 4;
		switch (k)
		{
		case 1: printf("%d ＋ %d =", a, b); break;
		case 2: printf("%d － %d =", a, b); break;
		case 3: printf("%d × %d =", a, b); break;
		case 0: printf("%d ÷ %d =", a, b); break;
		default:break;
		}
		
		printf("\n");
		
	}
	return;
}

int main()
{
	int n=300;//题目数量 默认300
	int m = 1000;//最大数 默认1000
	while (1) {
		

		int p=0;//菜单选择项
		printf("请选择模式：\n 1）开始\t 2）设置\n");
		scanf_s("%d", &p);
		if (p == 1) {
			start(n, m);

		}
		else if (p == 2) {
			int p2;
			printf("请选择:\n 1）设置题目数量；\n 2）设置最大数值；\n 3）退出\n");
			scanf_s("%d", &p2);
			switch (p2)
			{
			case 1:printf("请输入题目数量:");
				scanf_s("%d", &n); break;
			case 2:	printf("请输入出题范围（最大的数）:");
				scanf_s("%d", &m); break;
			case 3:return 1;
			default:
				printf("请输入正确的选项！");
				break;
			}
		}
		else {
			printf("请输入正确的选项！\n");
			p = 0;

		}
	}
	

}


//std::cout << "Hello World!\n";
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
