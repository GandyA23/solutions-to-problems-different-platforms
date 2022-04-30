// https://omegaup.com/arena/problem/Dibujando-un-tache

#include<bits/stdc++.h>

using namespace std;

int n;

void printSpaces(int n) {
    for (int i=0; i<n; i++)
        cout << " ";
}

void draw (int n) {
    int mSpaces = n-2, lSpaces = 0, i;

    for (i=0; i<n/2; i++) {
        printSpaces(lSpaces++);
        cout << '@';
        printSpaces(mSpaces);
        mSpaces -= 2;
        cout << '@';
        cout << endl;
    }

    printSpaces(lSpaces--);
    cout << '@';
    cout << endl;

    for (i=0; i<n/2; i++) {
        printSpaces(lSpaces--);
        cout << '@';
        printSpaces(mSpaces += 2);
        cout << '@';
        cout << endl;
    }
}

int main () {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    draw(n);

    return 0;
}