#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the entire line of text
    string s;
    getline(cin, s);

    // Read the word to be counted
    string x;
    cin >> x;

    // Use stringstream to extract words from the input line
    stringstream ss(s);
    string word;

    int count = 0;

    // Count occurrences of the word 'x'
    while (ss >> word) {
        if (word == x) {
            count++;
        }
    }

    // Output the count
    cout << count << endl;
    return 0;
}
