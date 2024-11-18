#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0, n = 0;
    char c;
    printf("Enter a Message: ");
    char str[100] = {0}; // 假设输入的字符串不超过99个字符
    fgets(str, sizeof(str), stdin); // 读取一行输入

    // 将字符串转换为大写
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }

    // 根据字符输出对应的数字
    while (str[n]) {
        switch (str[n]) {
            case 'A':
            case 'B':
            case 'C': printf("2"); break;
            case 'D':
            case 'E':
            case 'F': printf("3"); break;
            case 'G':
            case 'H':
            case 'I': printf("4"); break;
            case 'J':
            case 'K':
            case 'L': printf("5"); break;
            case 'M':
            case 'N':
            case 'O': printf("6"); break;
            case 'P':
            case 'Q':
            case 'R': printf("7"); break;
            case 'S':
            case 'T':
            case 'U':
            case 'V': printf("8"); break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z': printf("9"); break;
            default: printf("%c", str[n]);
        }
        n++;
    }
    printf("\n"); // 输出换行符
    return 0;
}