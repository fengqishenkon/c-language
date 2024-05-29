#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数的函数
int is_prime(int num) {
    if (num <= 1) {
        return 0; // 1 及以下的数不是素数
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0; // 如果能被其他数整除，则不是素数
        }
    }
    return 1; // 是素数
}

// 打印100到200之间的素数
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

