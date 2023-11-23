#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string sortVowels(string s) {
    vector<pair<char, int>> vowels;

    // Separating consonants and storing vowels with their indices
    for (int i = 0; i < s.length(); ++i) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels.push_back(make_pair(s[i], i));
        }
    }

    // Sorting the vowels based on their ASCII values
    sort(vowels.begin(), vowels.end());

    // Reconstructing the string with sorted vowels
    for (auto vowel : vowels) {
        s[vowel.second] = vowel.first;
    }

    return s;
}

int main() {
    string input1 = "lYmpH";
    string input2 = "newUzbekiStanunIverSIty";

    string output1 = sortVowels(input1);
    string output2 = sortVowels(input2);

    cout << output1 << endl; // Expected output: lYmpH
    cout << output2 << endl; // Expected output: nIwIzbUkaStenenevirSuty

    return 0;
}
