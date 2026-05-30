#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<pair<int, int>, int> coordinate_values;
    
    for (int i = 0; i < n; i++) {
        int x, y, value;
        cin >> x >> y >> value;
        coordinate_values[{x, y}] = value;
    }
    
    cout << "Values by coordinates:\n";
    for (const auto& pair : coordinate_values) {
        cout << "(" << pair.first.first << "," << pair.first.second << "): " 
             << pair.second << '\n';
    }
    
    return 0;
}
