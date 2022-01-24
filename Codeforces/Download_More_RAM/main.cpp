#include <bits/stdc++.h>

using namespace std;

struct Software {
    int execRam;
    int moreRam;
};

vector<Software> programs;

int t, n, k;
int result;
Software aux;

bool orderByExecRam (Software x1, Software x2) {
    return x1.execRam < x2.execRam; 
}

void printTest () {
    // print for test 
    for (int i=0; i<n; i++) {
        cout << programs[i].execRam << " ";
    }
    
    cout << endl;

    for (int i=0; i<n; i++) {
        cout << programs[i].moreRam << " ";
    }

    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t ;

    while (t--) {
        int i = 0;
        int x;

        cin >> n >> k;

        // Read execute ram array
        for (; i<n; i++) {
            cin >> x ;
            aux.moreRam = 0;
            aux.execRam = x;
            programs.push_back(aux);
        }

        // Read more ram arrays
        for (i=0; i<n; i++) {
            cin >> x ;
            programs[i].moreRam = x;
        }

        // Sort by exec ram
        sort(programs.begin(), programs.end(), orderByExecRam);

        for (i=0; i<n; i++) {
            if (programs[i].execRam > k) {
                break;
            }

            k += programs[i].moreRam;
        } 

        cout << k << endl ;

        // Clear programs
        programs.clear();
    } 
}