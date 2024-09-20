#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> negative, nt;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 0) {
            negative.push_back(x); 
        } else {
            nt.push_back(x); 
        }
    } 
    sort(negative.begin(), negative.end(), greater<int>()); 
    sort(nt.begin(), nt.end());
    for (int x : negative) {
        cout << x << " ";
    }
    for (int x : nt) {
        cout << x << " ";
    }
    
    cout << endl;

    return 0;
}
