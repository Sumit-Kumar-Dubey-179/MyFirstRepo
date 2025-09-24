#include <bits/stdc++.h>
using namespace std;

void xyz(int n) 
{
	if (n==1) 
	{
		cout<<"1"<<endl;
		return;
	}
		cout<<n<<" ";
		xyz(n-1);
	
}
int main() {
	int n;
	std::cin >> n;
	xyz(n);
	return 0;
}
