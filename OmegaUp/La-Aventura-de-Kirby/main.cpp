// https://omegaup.com/arena/problem/La-Aventura-de-Kirby/

#include<bits/stdc++.h>

using namespace std;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string answ = "Poyo :(";
    int n, k, puerta;

    cin >> n >> k;

    for (int i=0; i<n; i++) {
        cin >> puerta;
        if (puerta == k && answ == "Poyo :(")
            answ = to_string(i);
    }

    cout << answ << endl;

    return 0;
}
