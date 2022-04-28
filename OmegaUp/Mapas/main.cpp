// https://omegaup.com/arena/problem/OMI-2020-Mapas/

#include<bits/stdc++.h>

using namespace std;

char mapa1[500][500], mapa2[500][500];
vector< pair<int, int> > goal;
int n;

bool areSame (vector< pair<int, int> > intento) {
    return is_permutation(intento.begin(), intento.end(), goal.begin());
}

string checkItsSame() {
    int i, j, x, o;

    // Build horizontal
    vector< pair<int, int> > intento1, intento2;

    for (i=0; i<n; i++) {
        x = o = 0;
        for(j=0; j<n; j++) {
            cin >> mapa2[i][j];
            if (mapa2[i][j] == 'X')
                x++;
            else 
                o++;
        }
        intento1.push_back(make_pair(x, o));
    }

    // Build vertical
    for (i=0; i<n; i++) {
        x = o = 0;
        for(j=0; j<n; j++) {
            cin >> mapa2[j][i];
            if (mapa2[j][i] == 'X')
                x++;
            else 
                o++;
        }
        intento2.push_back(make_pair(x, o));
    }

    return areSame(intento1) || areSame(intento2) ? "IGUALES" : "DIFERENTES";
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int i,j;

    cin >> n;

    for (i=0; i<n; i++) {
        int x = 0, o = 0;
        for(j=0; j<n; j++) {
            cin >> mapa1[i][j];
            if (mapa1[i][j] == 'X')
                x++;
            else 
                o++;
        }
        goal.push_back(make_pair(x, o));
    }

    sort(goal.begin(), goal.end());

    cout << checkItsSame() << endl;

    return 0;
}
