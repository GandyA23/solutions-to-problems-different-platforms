// https://codeforces.com/contest/1515/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int t, n, x;
 
queue<int> waiting;
queue<int> response;
stack<int> gold;
 
void clean () {
    // Clean queue
    while (waiting.size()) {
        waiting.pop();
    }
 
    // Clean queue
    while (response.size()) {
        response.pop();
    }
 
    // Clean stack
    while (gold.size()) {
        gold.pop();
    }
}
 
void toStack (int aux[], int n) {
    for(int i=n-1; i >= 0; i--) {
        gold.push(aux[i]);
    }
}
 
void checkBreak () {
    int sum = 0;
    int aux, i=0, length ;
 
    while (gold.size()) {
        aux = gold.top();
 
        if (sum+aux != x) {
            sum += aux;
            response.push(aux);
        } else {
            waiting.push(aux);
        }
 
        gold.pop();
    }     
 
    length = waiting.size();
    while (i < length) {
        aux = waiting.front();
        waiting.pop();
 
        if (sum+aux != x) {
            sum += aux;
            response.push(aux);
            length = waiting.size();
            i = 0;
        } else {
            i++;
            waiting.push(aux);
        }
    }
 
    if (!length) {
        cout << "YES\n";        
        while (response.size()){
            cout << response.front() << " ";
            response.pop();
        }
        cout << "\n" ;
    } else {
        cout << "NO\n";
    }
}
 
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> t ;
 
    while (t--) {
        cin >> n >> x;
        int aux[n];
 
        for (int i=0; i<n; i++) {
            cin >> aux[i];
        }
 
        sort(aux, aux+n);
        toStack(aux, n);
        checkBreak();
        clean();
    } 
 
    return 0;    
}
