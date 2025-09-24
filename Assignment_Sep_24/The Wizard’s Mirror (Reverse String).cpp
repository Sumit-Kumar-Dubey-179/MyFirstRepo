#include <bits/stdc++.h>
using namespace std;

string rev(string s, int i = 0) {
    int n = s.size();
    if (i == n)
    return "";          
    return rev(s, i + 1) + s[i]; 
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Reversed string: " << rev(s) << endl;
    return 0;
}
