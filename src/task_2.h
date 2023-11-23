#include <iostream>
using namespace std;

// Function to check if a number is a power of two using recursion
string isPowerOfTwo(int n) {
    // Base cases
    if (n == 1) {
        return "YES";
    } else if (n % 2 != 0 || n == 0) {
        return "NO";
    }

    // Recursive case
    return isPowerOfTwo(n / 2);
}

int main() {
    int N;
    cin >> N;

    cout << isPowerOfTwo(N) << endl;

    return 0;
}
