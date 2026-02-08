#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
int main() {
    int length, width, height;
    int volume;

    scanf("%d %d %d", &length, &width, &height);

    if (height < MAX_HEIGHT) {
        volume = length * width * height;
        printf("%d\n", volume);
    } else {
        printf("0\n");
    }

    return 0;
}
