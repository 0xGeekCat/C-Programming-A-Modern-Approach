#include <stdio.h>

void func(int a[static 3])
{
    for (int i = 0; i < 3; ++i) {
        putchar(a[i]);
    }
}

int main(void)
{
    func((int []){'a', 'b', 'c'});
    return 0;
}