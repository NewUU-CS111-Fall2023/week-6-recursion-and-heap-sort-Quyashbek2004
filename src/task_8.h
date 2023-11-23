#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(const string &a, const string &b) {
    string result;
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 10;
        sum = sum % 10;
        result += to_string(sum);
    }

    reverse(result.begin(), result.end());
    return result;
}

string karatsuba(const string &x, const string &y) {
    int n = x.length();

    if (n == 1) {
        int
