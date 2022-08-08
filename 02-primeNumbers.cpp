#include <iostream>
using namespace std;

bool isPrime(int n){
    // Check from 2 to n-1
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int testCases;
    int a, b;
    scanf("%d",&testCases);
    for (int i = 0; i < testCases; i++){
        scanf("%d %d\n", &a, &b);

        //loop to print out all prime numbers
        for(int j = a; j <= b; a++){
            if (isPrime(a)) printf("%d\n", a);
        }
    }
}