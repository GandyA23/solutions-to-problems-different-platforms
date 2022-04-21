#include<bits/stdc++.h>

using namespace std;

int n;
long result = 0;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n;

    int a[n], b[n], i;

    for (i=0; i<n; i++)
        cin >> a[i];

    for (i=0; i<n; i++) {
        cin >> b[i];
        result += a[i] * b[i];
    }

    cout << result << "\n";
    
    return 0;
} 
