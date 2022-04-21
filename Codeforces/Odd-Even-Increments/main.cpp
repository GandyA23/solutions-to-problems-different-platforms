#include<bits/stdc++.h>

using namespace std;

int t, n;

string checkParity (int a[]) {
    bool firstOddInEven = !(a[1] % 2);
    bool firstOddInOdd = !(a[2] % 2);

    if (n % 2)
        a[++n] = firstOddInOdd ? 2 : 1;

    for (int i=3; i<=n-1; i+=2) {        
        if (firstOddInEven != !(a[i] % 2))
            return "NO"; 
            
        if (firstOddInOdd != !(a[i+1] % 2))
            return "NO"; 
    }

    return "YES";
}


int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;

    while(t--){
        cin >> n;

        int a[n+2];
        memset(a, 0, sizeof a);

        for (int i=1; i<=n; i++)
            cin >> a[i];
        
        cout << checkParity(a) << endl;
    }

    return 0;
}