#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100

int main() {
    float sum = 0.0;
    int i = 0;
    char a[N];
    printf("Enter an expression: ");
    fgets(a, N, stdin); // 使用fgets来安全地读取字符串

    // 假设输入的表达式是合法的，并且第一个字符是数字
    sum = atof(a); // 将第一个数字转换为浮点数

    // 遍历表达式中的每个字符
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ') continue; // 忽略空格

        if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') {
            // 找到操作符，处理下一个数字
            i++; // 跳过操作符
            switch (a[i-1]) {
                case '+': sum += atof(&a[i]); break;
                case '-': sum -= atof(&a[i]); break;
                case '*': sum *= atof(&a[i]); break;
                case '/': {
                    float divisor = atof(&a[i]);
                    if (divisor == 0) {
                        printf("Error: Division by zero.\n");
                        return 1;
                    }
                    sum /= divisor;
                    break;
                }
            }
        }
    }

    printf("Value of expression: %f\n", sum);
    return 0;
}