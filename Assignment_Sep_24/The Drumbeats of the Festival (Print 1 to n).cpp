#include <bits/stdc++.h>
using namespace std;

void xyz(int n) {
	if (n==1) {
		cout<<n<<" ";
		return;
	}
	xyz(n-1);
	cout<<n<<" ";
}
int main() {
	int n;
	std::cin >> n;
	xyz(n);
	return 0;
}
