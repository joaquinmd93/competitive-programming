# include <bits/stdc++.h> 
using namespace std; 

int main() {
    int n, k; 
    cin >> n >> k; 
    vector<int> p(n); 
    for (int i = 0; i < n; ++i) {
        cin >> p[i]; 
    }        
    sort(p.begin(), p.end()); 
    int ans = 0; 
    for (int i = 0; i < n; ++i){
        if (p[i] <= k) {
            k -= p[i]; 
            ++ans; 
        } 
    }
    cout << ans << endl; 
}