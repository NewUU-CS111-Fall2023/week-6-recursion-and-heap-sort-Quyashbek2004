#include <iostream>
using namespace std;

// Function to reverse the digits of a number using recursion
int reverseNumber(int n, int reversed) {
    // Base case: if n becomes 0, return the reversed number
    if (n == 0) {
        return reversed;
    }

    int lastDigit = n % 10; // Extract the last digit
    reversed = reversed * 10 + lastDigit; // Construct the reversed number

    // Recursive case: call the function with the remaining digits
    return reverseNumber(n / 10, reversed);
}

int main() {
    int n;
    cin >> n;

    int reversedNumber = reverseNumber(n, 0);

    cout << reversedNumber << endl;

    return 0;
}
