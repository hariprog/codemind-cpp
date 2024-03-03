#include <stdio.h>
#include <string.h>

void generate_otp(char *input) {
    int i, otp[4] = {0}, j = 0;
    for (i = 0; i < strlen(input); i++) {
        int digit = input[i] - '0';
        if (digit % 2 != 0) {
            otp[j] = digit * digit;
            j++;
            if (j == 4) {
                break;
            }
        }
    }
    for (int i = 0; i < j; i++) {
        printf("%d", otp[i]);
    }
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "
")] = 0;
    generate_otp(input);
    return 0;
}