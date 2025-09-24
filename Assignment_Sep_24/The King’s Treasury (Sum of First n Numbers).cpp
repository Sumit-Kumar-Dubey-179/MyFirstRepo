#include <bits/stdc++.h>
using namespace std;

void xyz(int n,int add) {
	if (n==1) {
		cout<<add+n<<endl;
		return;
	}
	xyz (n-1,add+n);
}
int main() {
	int n;
	std::cin >> n;
	int add=0;
	xyz (n,add);
	return 0;
}
