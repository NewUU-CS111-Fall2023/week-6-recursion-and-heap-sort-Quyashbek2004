#include <iostream>
using namespace std;

// Function to calculate the sum of digits using recursion
int sumOfDigits(int n) {
    // Base case: if the number is less than 10, return the number itself
    if (n < 10) {
        return n;
    }

    // Recursive case: sum the last digit and call the function for the remaining part of the number
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int N;
    cin >> N;

    int sum = sumOfDigits(N);
    cout << sum << endl;

    return 0;
}
