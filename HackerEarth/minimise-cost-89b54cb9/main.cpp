#include<bits/stdc++.h>

using namespace std;

struct PosValues
{
    int index; int number;
};

inline bool operator<(const PosValues &a, const PosValues &b)
{
    return a.number < b.number;
}

set<PosValues> positiveValues;

int n, k;
int numbers[100002], transfer[100002];
long long int minValue = 0;

void distribuite(PosValues pos)
{
    int toDistribuite = pos.number;
    int indexDistribuite = pos.index;

    int beginIndex = max(0, indexDistribuite - k);
    int endIndex = min(n-1, indexDistribuite + k);

    for (int i=beginIndex; i<=endIndex && toDistribuite; i++)
    {
        // If the absoulte difference is equal to zero
        if (!abs(numbers[i] + transfer[i]))
            continue;
        
        if (numbers[i] < 0)
        {
            int absValue = abs(numbers[i] + transfer[i]);
            int toTransfer = toDistribuite >= absValue ? absValue : toDistribuite;

            toDistribuite -= toTransfer;
            transfer[indexDistribuite] -= toTransfer;
            transfer[i] += toTransfer;
        }
    } 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> numbers[i];

        if (numbers[i] > 0)
        {
            PosValues pv;
            pv.index = i;
            pv.number = numbers[i];

            positiveValues.insert(pv);
        }
    }

    for_each(positiveValues.begin(), positiveValues.end(), distribuite);

    // Plus all differents and print the result
    for(int i=0; i<n; i++)
        minValue += abs(numbers[i] + transfer[i]);

    cout << minValue << endl;
    return 0;
}
