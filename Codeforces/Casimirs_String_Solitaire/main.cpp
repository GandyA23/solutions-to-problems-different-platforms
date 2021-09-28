#include <bits/stdc++.h>

using namespace std;

int t;
int letters[3];
string word;

void check (char c) {
    letters[c-'A']++;
}

int main () {   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;

    while (t--) {
        cin >> word ;
        for_each(word.begin(), word.end(), check);

        if (letters[0] + letters[2] == letters[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        memset(letters, 0, sizeof(letters));
    }

    return 0;
}
