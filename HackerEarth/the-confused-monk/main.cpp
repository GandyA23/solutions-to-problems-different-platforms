// URL Problem
// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

const lli MONK_QUOTIENT = 1000000007;

int main()
{
    int n; cin >> n;
    int numbers[n];

    lli result = 1;
    lli product = 1;
    int gcdNumber = 1;

    for(int i=0; i<n; i++)
    {
        cin >> numbers[i];
        gcdNumber = !i ? numbers[i] : __gcd(numbers[i], gcdNumber);
        product *= numbers[i];
        product %= MONK_QUOTIENT;
    }

    while (gcdNumber--)
    {
        result *= product;
        result %= MONK_QUOTIENT;
    }

    cout << result << endl;

    return 0;
}