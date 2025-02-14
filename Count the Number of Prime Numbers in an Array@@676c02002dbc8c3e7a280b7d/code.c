#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Efficient checking up to sqrt(num)
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];  // Proper array declaration
    int prime_count = 0;

    // Read array elements and count primes
    for (int i = 0; i < n; i++) {  // Fix loop to start at 0 and go up to n-1
        scanf("%d", &arr[i]);
        if (is_prime(arr[i])) {
            prime_count++;  // Increment only if the number is prime
        }
    }

    printf("%d\n", prime_count); // Print count of prime numbers
    return 0;
}
