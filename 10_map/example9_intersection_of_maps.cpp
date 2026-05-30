#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    
    cin >> n;
    map<int, int> map1;
    for (int i = 0; i < n; i++) {
        int key, value;
        cin >> key >> value;
        map1[key] = value;
    }
    
    cin >> m;
    map<int, int> map2;
    for (int i = 0; i < m; i++) {
        int key, value;
        cin >> key >> value;
        map2[key] = value;
    }
    
    vector<int> common_keys;
    
    for (const auto& pair : map1) {
        if (map2.count(pair.first)) {
            common_keys.push_back(pair.first);
        }
    }
    
    cout << "Keys present in both maps: ";
    for (int key : common_keys) {
        cout << key << " ";
    }
    cout << '\n';
    
    return 0;
}
