#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "No points\n";
        return 0;
    }
    
    vector<pair<double, pair<double, double>>> points;
    
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        double distance = sqrt(x * x + y * y);
        points.push_back({distance, {x, y}});
    }
    
    auto closest = *min_element(points.begin(), points.end());
    
    cout << fixed << setprecision(3);
    cout << "Closest point to origin: (" << closest.second.first 
         << ", " << closest.second.second 
         << ") distance: " << closest.first << '\n';
    
    return 0;
}
