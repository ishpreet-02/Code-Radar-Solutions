#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if(num<2){
        return 0;

    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;

        }

    }
    return 1;


}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];  
    int prime_count = 0;
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
        if (is_prime(arr[i])) {
            prime_count++;  
        }
    }

    printf("%d\n", prime_count); 
    return 0;
}
