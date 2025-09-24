#include <bits/stdc++.h>
using namespace std;

int sumit(int n) {
    if (n == 0) 
    return 1;  
    if (n < 0)
    return 0;  
    return (sumit(n - 1) + sumit(n - 2));
}

int main() {
    int n;
    cin >> n;
    cout << sumit(n) << endl;
    return 0;
}
