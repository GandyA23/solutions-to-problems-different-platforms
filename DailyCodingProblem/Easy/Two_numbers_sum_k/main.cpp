#include<bits/stdc++.h>

using namespace std;

bool binarySearch (int arr[], int n, int x) {
	int l = 0;
	int r = n-1;
	int mid;

	while (l+1 < r) {
		mid = (l+r)/2;

		if (arr[mid] == x) {
			return true;
		} else if (arr[mid] < x) {
			r = mid;
		} else {
			l = mid;
		}
	}
	
	return arr[l] == x || arr[r] == x ;
}

bool twoSum (int arr[], int n, int k) {
	int target;
	bool aux;

	sort(arr, arr+n);

	for (int i=0; i<n; i++) {
		target = k - arr[i];

		aux = binarySearch(arr, n, target);

		if (aux) {
			return true;
		} 
	}

	return false;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// int arr[] = {10, 15, 3, 7};
	int arr[] = {20, 40, 60, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 17;
	
	cout << twoSum(arr, n, k) << endl;
}
