// https://codeforces.com/contest/1669/problem/G

#include<bits/stdc++.h>

#define EMPTY '.'
#define STONE '*'
#define OBSTACLE 'o'

using namespace std;

int n, m, t;
char grid[50][50];

bool canMoveStone (int x, int y) {
    return grid[x+1][y] == EMPTY && grid[x][y] == STONE;  
}

void simulate () {
    int i, j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> grid[i][j];

    bool didMove = true;

    while (didMove) {
        int lastFileMoved = n-2;
        didMove = false;
        for (i=lastFileMoved; i>=0; i--) { 
            for (j=0; j<m; j++) {
                if (canMoveStone(i, j)) {
                    didMove = true;
                    swap(grid[i][j], grid[i+1][j]);
                }
            }

            if (!didMove)
               lastFileMoved--; 
        }
    }
}

void printResult() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cout << grid[i][j];
        cout << endl;
    }
    cout << endl;
}

int main () {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin >> t;

    while(t--) {
        cin >> n >> m;
        simulate();
        printResult();
    }   

    return 0;
}