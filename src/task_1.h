#include <iostream>
using namespace std;

void printNumbers(int start, int end) {
    // Base case: if start and end are equal, print the number and return
    if (start == end) {
        cout << start << " ";
        return;
    }

    // Recursive case: print the current number and call the function recursively
    cout << start << " ";

    // Check whether to move forward or backward
    if (start < end) {
        printNumbers(start + 1, end); // Ascending order
    } else {
        printNumbers(start - 1, end); // Descending order
    }
}

int main() {
    int A, B;
    cin >> A >> B;

    if (A <= B) {
        printNumbers(A, B); // Call the function for ascending order
    } else {
        printNumbers(A, B); // Call the function for descending order
    }

    cout << endl;
    return 0;
}
