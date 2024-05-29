#include <stdio.h>

// 打印乘法口诀表函数
void printMultiplicationTable(int n) {
    int i, j; // 在函数的开头声明变量
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("请输入乘法口诀表的大小：");
    scanf("%d", &size);
    printMultiplicationTable(size);
    return 0;
}

