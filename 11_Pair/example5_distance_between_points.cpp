#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double calculate_distance(const pair<double, double>& p1, 
                          const pair<double, double>& p2) {
    double dx = p1.first - p2.first;
    double dy = p1.second - p2.second;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pair<double, double> point1, point2;
    
    cin >> point1.first >> point1.second;
    cin >> point2.first >> point2.second;
    
    double distance = calculate_distance(point1, point2);
    
    cout << fixed << setprecision(3);
    cout << "Distance between points: " << distance << '\n';
    
    return 0;
}
