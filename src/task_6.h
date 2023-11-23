#include <iostream>
using namespace std;

// Recursive function to find the second largest element
void secondLargest(int &firstMax, int &secondMax) {
    int num;
    cin >> num;

    if (num == 0) {
        return;
    }

    if (num > firstMax) {
        secondMax = firstMax;
        firstMax = num;
    } else if (num > secondMax && num != firstMax) {
        secondMax = num;
    }

    secondLargest(firstMax, secondMax);
}

int main() {
    int firstMax = INT_MIN; // Initialize with smallest possible integer
    int secondMax = INT_MIN; // Initialize with smallest possible integer

    secondLargest(firstMax, secondMax);

    cout << secondMax << endl;

    return 0;
}
