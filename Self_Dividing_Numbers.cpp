#include <stdio.h>

int isSelfDividing(int num) {
    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return 0; // Not self-dividing
        }
        num /= 10;
    }
    return 1; // Self-dividing
}

int main() {
    int left, right;
    scanf("%d %d", &left, &right);
    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
