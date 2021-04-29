#include<bits/stdc++.h>

using namespace std;

int n, a, b, mid;

int main () {
    cin >> n >> a >> b ;

    if (a > b) {
        int k = b;
        b = a;
        a = k;
    } 

    mid = n/2;

    if (a <= mid && b > mid) {
        cout << "Final!" << endl;
    } else {
        int round = 1 ;
        int pot = 2;
        while (a+1 < b) {
            a += pot;
            pot *= 2;
            round++;
        } 

        cout << round << endl;
    }
}