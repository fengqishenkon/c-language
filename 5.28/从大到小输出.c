#include <stdio.h>
int main()
{
    int m[3] = {0};
    int i, j, temp;

    // 读取输入
    scanf("%d %d %d", &m[0], &m[1], &m[2]);

    // 使用冒泡排序法对数组进行排序
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (m[j] < m[j + 1]) {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    // 输出排序后的数组
    for (i = 0; i < 3; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");

    return 0;
}

