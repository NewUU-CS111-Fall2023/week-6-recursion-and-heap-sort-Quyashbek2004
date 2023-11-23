#include <iostream>
using namespace std;

// Recursive function to check if a number is prime
bool isPrime(int n, int divisor) {
    // Base cases
    if (n <= 2) {
        return (n == 2);
    }
    if (divisor == 1) {
        return true;
    }
    // If the number is divisible by the divisor, it's composite
    if (n % divisor == 0) {
        return false;
    }

    // Recursively check for divisibility by decrementing the divisor
    return isPrime(n, divisor - 1);
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n, n - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
