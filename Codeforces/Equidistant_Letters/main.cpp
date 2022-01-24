#include <bits/stdc++.h>

using namespace std;

string s;
int n;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> n;
    
    while (n--) {
        cin >> s ;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    
    return 0;
}