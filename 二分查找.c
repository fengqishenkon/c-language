#include <stdio.h>
int main() {
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = 0;
    int r = sizeof(c) / sizeof(c[0]) - 1; // 数组长度减1
    int i = 0;
    int mid;

    printf("请输入要查找的整数: ");
    scanf("%d", &i);

    while (l <= r) 
	{
        mid = (l + r) / 2; // 计算中间位置

        if (c[mid] > i) 
		{
            r = mid - 1;
        } 
		else if (c[mid] < i)
		 {
            l = mid + 1;
        }
		 else 
		 {
            printf("找到 %d 在位置 %d\n", i, mid);
            return 0; // 结束程序
        }
    }

    // 如果没有找到
    printf("未找到 %d\n", i);
    return 0;
}

