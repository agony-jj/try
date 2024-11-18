#include <stdio.h>
void two()
{
    printf("two\nthree\n");
}
void onethree()
{
    printf("one\n");
    two();
}
int main()
{
    printf("start.\n");
    onethree();
    printf("done");
    return 0;
}