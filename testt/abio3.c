// #include <stdio.h>
// void butler()
// {
//     printf("\"you are right\"\n");
// }
// int main()
// {
//     printf("It is so difficutlt.\n");
//     butler();
//     printf("That is a really hard thing\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    char c;
    int i = 0;
    
    while ((c = getchar()) != '\n') {
        int j = c - '0'; // 将数字字符转换为对应的数
        i = i * 10 + j;
    }

    printf("%d\n", i);
    
    return 0;
}