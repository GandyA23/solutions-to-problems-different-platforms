// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, leftZeros = 0;
    string ai, answer = "No";
    bool apearDigitGreaterZero = true;
    
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> ai;

        if (ai.back() != '0')
            apearDigitGreaterZero = false;
        else if(apearDigitGreaterZero) 
            leftZeros++;
    }
        

    if (ai.back() == '0' && n - leftZeros > 1)
        answer = "Yes";

    cout << answer << endl;

    return 0;
}
