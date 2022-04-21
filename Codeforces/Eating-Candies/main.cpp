#include<bits/stdc++.h>

using namespace std; 

int t, n;

struct Child {
    int pos = 0;
    int actualWeight = 0;
};

int countCandiesAte (int *candies) {
    if (n == 1)
        return 0;

    int result = 0, candiesAte = 0;
    Child anna, bob;

    bob.pos = n-1;

    while (anna.pos <= bob.pos) {
        if (anna.actualWeight < bob.actualWeight || !anna.actualWeight) {
            anna.actualWeight += candies[anna.pos++];
            candiesAte++;
        } else if (anna.actualWeight > bob.actualWeight) {
            bob.actualWeight += candies[bob.pos--];
            candiesAte++;
        } else {
            result += candiesAte;
            candiesAte = anna.actualWeight = bob.actualWeight = 0;
        }    
        // cout << anna.actualWeight << " " << bob.actualWeight << endl;
    }

    if (anna.actualWeight == bob.actualWeight)
        result += candiesAte; 

    return result;
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;

    while (t--) {
        cin >> n;

        int candies[n];
        
        for(int i=0; i<n; i++)
            cin >> candies[i];

        cout << countCandiesAte(candies) << endl;
        // cout << "\n";
    }

    return 0;
}
