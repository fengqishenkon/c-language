#include <stdio.h>

int main() {
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = 0;
    int r = sizeof(c) / sizeof(c[0]) - 1; // ���鳤�ȼ�1
    int i = 0;
    int mid;
    printf("������Ҫ���ҵ�����: ");
    scanf("%d", &i);
    for (l = 0, r = sizeof(c) / sizeof(c[0]) - 1; l <= r; ) 
	{
        mid = (l + r) / 2;

        if (c[mid] > i) 
		{
            r = mid - 1;
        } else if (c[mid] < i) 
		{
            l = mid + 1;
        } else {
            printf("�ҵ� %d ��λ�� %d\n", i, mid);
            return 0; // �ҵ�Ԫ�غ��������
        }
    }

    // ���û���ҵ�
    printf("δ�ҵ� %d\n", i);
    return 0;
}

