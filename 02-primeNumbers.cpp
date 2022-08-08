#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// THIS METHOD FOR FINDING PRIMES IS TOO INEFFICIENT 
// bool isPrime(int n){
//     // Check from 2 to n-1
//     for (int i = 2; i < n; i++){
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// BRUTE FORCE METHOD FOR VERIFYING IF PRIME
bool isPrime(long int num){
    if (num <= 1) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;
    else{
        bool prime = true;
        int divisor = 3;
        int upperLimit = sqrt(num) + 1;

        while (divisor <= upperLimit){
            if (num % divisor == 0) return false;
            divisor += 2;
        }
        return prime;
    }
}

//SEGMENTED SIEVE OF ERATOSTHENES?

int main(){
    int testCases;
    int a, b;
    scanf("%d",&testCases);
    for (int i = 0; i < testCases; i++){
        
        scanf("%d %d", &a, &b);

        //loop to print out all prime numbers
        for(int j = a; j <= b; j++){
            if (isPrime(j)) printf("%d\n", j);
        }

    }
    return 0;
}