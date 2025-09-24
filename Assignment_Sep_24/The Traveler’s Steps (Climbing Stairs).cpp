#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if (n == 0) return 1;  // reached top
    if (n < 0) return 0;   // invalid path
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n) << endl;
    return 0;
}
