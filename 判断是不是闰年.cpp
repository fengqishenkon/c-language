#include <stdio.h>

// �ж��Ƿ�Ϊ����ĺ���
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // ����
    } else {
        return 0; // ��������
    }
}

int main() {
    int year;
    printf("���������: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d ������\n", year);
    } else {
        printf("%d ��������\n", year);
    }

    return 0;
}

