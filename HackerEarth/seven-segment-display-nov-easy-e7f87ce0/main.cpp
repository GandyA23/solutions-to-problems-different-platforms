// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/

#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> NUMBER_STICKS;

    NUMBER_STICKS.insert(pair<char, int>('8', 7));
    NUMBER_STICKS.insert(pair<char, int>('0', 6));
    NUMBER_STICKS.insert(pair<char, int>('6', 6));
    NUMBER_STICKS.insert(pair<char, int>('9', 6));
    NUMBER_STICKS.insert(pair<char, int>('2', 5));
    NUMBER_STICKS.insert(pair<char, int>('3', 5));
    NUMBER_STICKS.insert(pair<char, int>('5', 5));
    NUMBER_STICKS.insert(pair<char, int>('4', 4));
    NUMBER_STICKS.insert(pair<char, int>('7', 3));
    NUMBER_STICKS.insert(pair<char, int>('1', 2));

    int t; cin >> t;

    while (t--)
    {
        int numberSticks = 0;
        string n; cin >> n;

        for (int i=0; i<n.size(); i++)
            numberSticks += NUMBER_STICKS[n[i]];

        string answ = numberSticks % 2 ? "7" : "1";
        numberSticks -= 2;

        while(numberSticks > 1)
        {
            answ += "1";
            numberSticks -= 2;
        }

        cout << answ << endl;
    }

    return 0;
}
