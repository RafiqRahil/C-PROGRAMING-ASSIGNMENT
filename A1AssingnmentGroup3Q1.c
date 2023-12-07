#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int productOfDigits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}
int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    int sum = sumOfDigits(N);
    int product = productOfDigits(N);
    if (N % sum == 0 || N % product == 0) {
        printf("Hit\n");
    } else {
        printf("Miss\n");
    }
    return 0;
}
