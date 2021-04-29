#include<bits/stdc++.h>

using namespace std;

int a, b, k;
int maxInRange, res ;

// Algorithm 3n + 1
int threeNPlusOne (int x) {
	int step = 1;

	while (x > 1) {
		// If the number is pair
		if (x%2 == 0) {
			x /= 2;
		} else {
			x = (x*3)+1;
		}
		step++;
	}

	return step;
}

int main () {
	while (cin >> a >> b) {
		// Print a part of answer
		cout << a << " " << b << " ";

		k = maxInRange = 0;
		
		// If the numbers are backwards 
		if (a>b) {
            		k = b;
            		b = a;
            		a = k;
        	}

		// Calculate max in range in the algorithm
		for (int i=a; i<=b; i++) {
			res = threeNPlusOne(i);
			if (res >= maxInRange) {
				maxInRange = res;
			} 
		}
		
		// Print answer
		cout << maxInRange << endl;
	}

	return 0;
}
