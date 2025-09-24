#include <bits/stdc++.h>
using namespace std;
int fibbo(int n) {
	if (n <= 2)
		return 1;
	return (fibbo(n - 1)+fibbo(n-2));
}
int main() {
	int n;
	cout << "Enter number of month:";
	cin >> n;
	cout << fibbo(n) << endl;
	return 0;
}
