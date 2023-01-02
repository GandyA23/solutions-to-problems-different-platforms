// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/


#include <bits/stdc++.h>

using namespace std;

int zs, os;

void fun(char c)
{
    if (c == 'z') zs++;
    else os++;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string word; cin >> word;
    for_each(word.begin(), word.end(), fun);
    cout << (zs * 2 == os ? "Yes" : "No") << endl;

    return 0;
}
