#include <stdio.h>
#include <math.h>

// �ж�һ�����Ƿ�Ϊ�����ĺ���
int is_prime(int num) {
    if (num <= 1) {
        return 0; // 1 �����µ�����������
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0; // ����ܱ���������������������
        }
    }
    return 1; // ������
}

// ��ӡ100��200֮�������
void print_primes_between_100_and_200() {
    for (int i = 100; i <= 200; ++i) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    print_primes_between_100_and_200();
    return 0;
}

