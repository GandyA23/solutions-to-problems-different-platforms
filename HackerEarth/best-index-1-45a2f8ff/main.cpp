// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/

#include<bits/stdc++.h>

using namespace std;

struct SpecialSum 
{
    long total = 0L;
    int index = 0;
};

vector<SpecialSum> sums;

int n;
long answ = LONG_MIN, totalGlobal = 0L;

void nextSum(int numbers[])
{
    for (int i=sums.size()-1; i>=0; i--)
     {
        totalGlobal -= sums[i].total;

        if (sums[i].index + 1 >= n)
        {
            sums.pop_back();
            continue;
        }

        if (i == 0)
        {
            sums[i].total = numbers[++sums[i].index];
        }
        else 
        {
            sums[i].total -= numbers[sums[i-1].index + 1];
            sums[i].total += numbers[++sums[i].index];
        }

        totalGlobal += sums[i].total;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    int numbers[n], i, last;

    for(i=0; i<n; i++)
        cin >> numbers[i];

    i = 1, last = 0;

    while (last + i <= n)
    {
        long total = 0L;
        int j = last;

        for(; j<last + i; j++)
            total += numbers[j];

        totalGlobal += total;

        SpecialSum ss;

        ss.index = j-1;
        ss.total = total;

        sums.push_back(ss);

        last = sums[i-1].index + 1;
        i++;
    }

    while(!sums.empty())
    {
        answ = max(answ, totalGlobal);
        nextSum(numbers);
    }

    cout << answ << endl;

    return 0;
}