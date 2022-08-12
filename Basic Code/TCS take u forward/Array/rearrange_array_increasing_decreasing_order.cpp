// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	vector<int>arr = {8, 7, 1, 6, 5, 9};
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n / 2; i++) {
		cout << arr[i] << " ";
	}
	for (int i = n - 1; i >= n / 2; i--) {
		cout << arr[i] << " ";
	}
}
