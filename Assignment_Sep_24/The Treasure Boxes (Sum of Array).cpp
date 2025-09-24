#include <bits/stdc++.h>
using namespace std;

int xyz(int arr[], int n) {
	if (n == 0)
		return 0;
	return arr[n-1] + xyz (arr, n-1);
}
int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    std::cin >> arr[i];
	}
	cout << xyz(arr, n) << endl;
	return 0;
}
