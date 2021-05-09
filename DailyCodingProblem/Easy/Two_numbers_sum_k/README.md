## Level: Easy

# Description

Given a list of numbers and a number `k`, return whether any two numbers from the list add up to `k`.

For example, given `[10, 15, 3, 7]` and `k = 17`, return `true` since `10 + 7 = 17`.

# Solution
This problem can be solved in several different ways.

Brute force way would involve a nested iteration to check for every pair of numbers:

```cpp
bool twoSum (int arr[], int n, int k) {
	int i, j ;
	int m = n-1;

	for (int i=0; i<m; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] + arr[j] == k) {
				return true;
			}
		}
	}
	return false;
}
```

This would take `O(N*N)`. Another way is to use a set to remember the numbers we've seen so far. Then for a given number, we can check if there is another number that, if added, would sum to `k`. This would be `O(N)` since lookups of sets are `O(1)` each.


```cpp
set<int> numbers ;
set<int>::iterator it ;
bool twoSum (int arr[], int n, int k) {
	int aux;
	for (int i=0; i<n; i++) {
		aux = k - arr[i];
		it = numbers.find(aux);

		if (it != numbers.end()) {
			return true;
		}
		 
		numbers.insert(aux);
	}
	return false ;
}
```

Yet another solution involves sorting the list. We can then iterate through the list and run a binary search on `k - arr[i]`. Since we run binary search on `N` elements, this would take `O(N log N)` with `O(1)` space.

```cpp
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
```
