#include <stdio.h>

int main() {
    int n, a, b, c;
    int next, i;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    if (n == 1)
        printf("%d", a);
    else if (n == 2)
        printf("%d", b);
    else if (n == 3)
        printf("%d", c);
    else {
        for (i = 4; i <= n; i++) {
            next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        printf("%d", c);
    }

    return 0;
}


