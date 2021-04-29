#include<bits/stdc++.h>

using namespace std;

bool twoNumbersAddUp (int arr[], int n, int k) {
	int h, t, sum;
	bool flag = 0;
	
	sort(arr, arr+n);

	sum = t = h = 0;

	while (t < n && !flag) {
		++h;

		if (h >= n || sum > k) {
			t++;
			h = t;
			sum = 0;
		} else {
			sum = arr[t] + arr[h];
			flag = k == sum;
			cout << arr[t] << " " << arr[h] << " " << sum << endl;
		}
	}

	return flag ;
}

int main () {
	int arr[] = {10, 15, 3, 7};
	// int arr[] = {20, 40, 60, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 17;
	
	cout << (twoNumbersAddUp(arr, n, k) ? "true" : "false") << endl;
}
