#include <stdio.h>

/* 
* 斐波那契数列
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

// 主函数入口
int main() {
    int n = 0;
    scanf("%d", &n);        // 输入n的值
    // int sum = Fib(n);
    // printf("%d", sum);
    printf("%d", Fib(n));
    return 0;
}
