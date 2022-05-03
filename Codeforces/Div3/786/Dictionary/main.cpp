// https://codeforces.com/contest/1674/problem/B

#include<bits/stdc++.h>

using namespace std;

map<string, int> dic;

void doDictionary () {
    int cont = 0;
    for (char i='a'; i<='z'; i++)
        for (char j='a'; j<='z'; j++) {
            if (i != j) {
                string s = ""; s += i; s += j;
                dic.insert(make_pair(s, ++cont));
            }
        }
}

void printMap() {
    for(auto it=dic.cbegin(); it!=dic.cend(); ++it) {
        auto i = (*it);
        cout << i.first << " " << i.second << endl;
    }
}


int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    doDictionary();
    // printMap();
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << dic.at(s) << endl;
    }
    return 0;
}
