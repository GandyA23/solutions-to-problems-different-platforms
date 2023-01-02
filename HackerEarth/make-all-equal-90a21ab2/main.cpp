#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	
    int n; cin >> n;
    int a[n], b[n];
    int i, minimum = INT_MAX, steps = 0, mulSteps;

    // Read
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        minimum = min(a[i], minimum);
    }

    for(i=0; i<n; i++)
        cin >> b[i];

    // Solve
    bool continueLoop = true;

    while(continueLoop)
    {
        continueLoop = false;
        for(i=0; i<n; i++)
        {
            if (a[i] < b[i] || a[i] <= minimum || !b[i])
                continue;
            
            mulSteps = a[i] - minimum < b[i] ? 1 : (a[i] - minimum) / b[i];
            steps += mulSteps;
            a[i] -= b[i] * mulSteps;

            if (a[i] < minimum)
            {
                minimum = a[i];
                continueLoop = true;
            }
        }
    }

    // Check if all is the same
    for(i=0; i<n-1; i++)
        if (a[i] != a[i+1])
        {
            steps = -1;
            break;
        }

    cout << steps << endl;

    return 0;
}
