https://omegaup.com/arena/problem/Imprimiendo-enteros-por-paridad/#problems
#include <bits/stdc++.h>

using namespace std;

int main ( ) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int nums[n]; 
    for (int i=0; i<n; i++)
        cin >> nums[i];
    int p; cin >> p;
    for (int i=0; i<n; i++)
        if (nums[i] % 2 == p)
            cout << nums[i] << " ";
    cout << endl;

    return 0;
}
