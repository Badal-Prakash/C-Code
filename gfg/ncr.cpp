#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20;
    printf("%dn", x);
    return 0;
}