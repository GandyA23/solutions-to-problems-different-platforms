// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/

#include<bits/stdc++.h>
#define BLACK '#'

using namespace std;

int n, m;

int countShapes(int i, int j, char** table)
{
    int k, countedRows = 0, countedCols = 0;

    // Search in rows
    k = i;
    while(k < n && table[k][j] == BLACK)
    {
        k++;
        countedRows++;
    }   

    // Search in cols
    k = j;
    while(k < m && table[i][k] == BLACK)
    {
        k++;
        countedCols++;
    } 

    return max(countedRows, countedCols);
} 

int solve(char** table)
{
    int maxCounted = 0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if (table[i][j] == BLACK)
                maxCounted = max(maxCounted, countShapes(i, j, table));

    return maxCounted;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    
    while(t--)
    {
        cin >> n >> m;
        char** table = new char *[n];

        for(int i=0; i<n; i++)
        {
            table[i] = new char[m];

            for(int j=0; j<m; j++)
                cin >> table[i][j];
        }

        cout << solve(table) << endl;
    }

    return 0;
}
