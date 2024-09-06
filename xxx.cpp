#include <bits/stdc++.h>
using namespace std;

string replaceString(string S, string X) {
    string result;
    int pos = 0, found;
    while ((found = S.find(X, pos)) != -1) {
        result.append(S, pos, found - pos);
        result.append("#");
        pos = found + X.length();
    }
    result.append(S, pos);
    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  // Ignore the newline after the integer input
    
    for (int i = 0; i < T; ++i) {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);
        cout << replaceString(S, X) << endl;
    }
    
    return 0;
}
