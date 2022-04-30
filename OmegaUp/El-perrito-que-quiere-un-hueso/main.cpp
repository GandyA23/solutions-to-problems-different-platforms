// https://omegaup.com/arena/problem/El-perrito-que-quiere-un-hueso/

#include<bits/stdc++.h>

using namespace std;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    short l1, t1, l2, t2;

    cin >> l1 >> t1 >> l2 >> t2 ;

    if (l1 > l2 && t1 > t2)
        cout << "Hueso 1" << endl;
    else if (l2 > l1 && t2 > t1)
        cout << "Hueso 2" << endl;
    else 
        cout << "Perrito confundido :(" << endl;

    return 0;
}
