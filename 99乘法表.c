#include <stdio.h>

// ��ӡ�˷��ھ�����
void printMultiplicationTable(int n) {
    int i, j; // �ں����Ŀ�ͷ��������
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("������˷��ھ���Ĵ�С��");
    scanf("%d", &size);
    printMultiplicationTable(size);
    return 0;
}

