#include<bits/stdc++.h>

using namespace std;

int t, r;

string checkRating(int r) {
    if (r <= 1399)
        return "Division 4";
    if (r >= 1400 && r <= 1599) 
        return "Division 3"; 
    if (r >= 1600 && r <= 1899) 
        return "Division 2"; 
    
    return "Division 1"; 
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;

    while (t--) {
        cin >> r;

        cout << checkRating(r) << endl;
    }

    return 0;
}