#include <iostream>
#include <string>
using namespace std;

// Function to check if a word is a palindrome using recursion
bool isPalindrome(string word, int start, int end) {
    // Base case: if the length of the substring is 0 or 1, it's a palindrome
    if (start >= end) {
        return true;
    }

    // If the first and last characters don't match, it's not a palindrome
    if (word[start] != word[end]) {
        return false;
    }

    // Recursively check the remaining substring
    return isPalindrome(word, start + 1, end - 1);
}

int main() {
    string input;
    cin >> input;

    int length = input.length();

    if (isPalindrome(input, 0, length - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
