#include <stdio.h>

int main() {
    int num;

    printf("請輸入一個整數：\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d 是偶數\n", num);
    }
    else {
        printf("%d 是基數\n", num);
    }

    return 0;
}
