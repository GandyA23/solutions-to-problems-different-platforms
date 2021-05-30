#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void print (int i) {
	cout << i << " " ;
}

vi products (vi nums) {
	int i = 0, n = nums.size();
	vi prefix, suffix, results, numsRev;

	numsRev = nums;
	reverse(numsRev.begin(), numsRev.end());

	// Generate prefix and suffix products
	for (i=0; i<n; i++) {
		if (i) {
			prefix.push_back(prefix[i-1] * nums[i]);
			suffix.push_back(suffix[i-1] * numsRev[i]);
		} else {
			prefix.push_back(nums[i]);
			suffix.push_back(numsRev[i]);
		}
	}

	reverse(suffix.begin(), suffix.end());

	// Generate result
	for (i=0; i<n; i++) {
		if (!i) {
			results.push_back(suffix[i+1]);
		} else if (i == n-1) {
			results.push_back(prefix[i-1]);
		} else {
			results.push_back(prefix[i-1] * suffix[i+1]);
		}
	}
	return results;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// int arr[] = {1, 2, 3, 4, 5};
	int arr[] = {3, 2, 1};
	int n = sizeof(arr)/sizeof(abs(arr[0]+1));

	vi nums ;
	nums.assign(arr, arr+n);

	nums = products(nums);

	for_each(nums.begin(), nums.end(), print);
	cout << endl;
	return 0;
}
