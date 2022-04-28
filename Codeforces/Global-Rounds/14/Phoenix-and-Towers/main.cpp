// https://codeforces.com/contest/1515/problem/C

#include <bits/stdc++.h>

using namespace std;

struct Tower {
    int posIni, noTower, h;
};

bool sortByHeight (Tower t1, Tower t2) {
    return t1.h < t2.h;
}

bool sortByPosIni (Tower t1, Tower t2) {
    return t1.posIni < t2.posIni;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--) {
        int i, j = 0;
        int n, m, x;

        cin >> n >> m >> x;

        Tower towers[n];
        int heights[m];

        for (i=0; i<n; i++) {
            cin >> towers[i].h;
            towers[i].posIni = i;
        }
        
        sort(towers, towers+n, sortByHeight);
        memset(heights, 0, sizeof heights);

        for (i=0; i<n; i++) {
            if (j == m)
                j = 0;
            
            heights[j] += towers[i].h;
            towers[i].noTower = j+1;

            j++;
        }

        sort(heights, heights+m);
        sort(towers, towers+n, sortByPosIni);

        if(heights[m-1] - heights[0] > x)
            cout << "NO\n";
        else {
            cout << "YES\n";

            for (i=0; i<n; i++)
                cout << towers[i].noTower << " ";
            cout << endl;
        }
    }

    return 0;
}