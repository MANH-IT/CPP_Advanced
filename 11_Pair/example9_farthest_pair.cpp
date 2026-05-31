#include <bits/stdc++.h>
#include <cmath>
using namespace std;

pair<pair<double, double>, pair<double, double>> 
find_farthest_pair(const vector<pair<double, double>>& points) {
    if (points.size() < 2) {
        throw runtime_error("Need at least 2 points");
    }
    
    pair<double, double> p1 = points[0];
    pair<double, double> p2 = points[1];
    double max_dist_sq = 0;
    
    for (size_t i = 0; i < points.size(); i++) {
        for (size_t j = i + 1; j < points.size(); j++) {
            double dx = points[i].first - points[j].first;
            double dy = points[i].second - points[j].second;
            double dist_sq = dx * dx + dy * dy;
            
            if (dist_sq > max_dist_sq) {
                max_dist_sq = dist_sq;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }
    
    return {p1, p2};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n < 2) {
        cout << "Need at least 2 points\n";
        return 0;
    }
    
    vector<pair<double, double>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    try {
        auto [p1, p2] = find_farthest_pair(points);
        
        double dx = p1.first - p2.first;
        double dy = p1.second - p2.second;
        double distance = sqrt(dx * dx + dy * dy);
        
        cout << fixed << setprecision(3);
        cout << "Farthest points: (" << p1.first << ", " << p1.second 
             << ") and (" << p2.first << ", " << p2.second << ")\n";
        cout << "Distance: " << distance << '\n';
    } catch (const exception& e) {
        cout << "Error: " << e.what() << '\n';
    }
    
    return 0;
}
