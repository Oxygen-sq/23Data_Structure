#include <stdio.h>

/* 
* 쳲���������
* 2022.7.56
*/

int Fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return Fib(n - 1) + Fib(n - 2);
    }
}

// ���������
int main() {
    int n = 0;
    scanf("%d", &n);        // ����n��ֵ
    // int sum = Fib(n);
    // printf("%d", sum);
    printf("%d", Fib(n));
    return 0;
}
