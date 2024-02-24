#include <stdio.h>

int fibonacci(int n);

int main() {
    int i,n;

    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Inalid value\n");
        return 1;
    }

    printf("Fibonacci sequence : ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

