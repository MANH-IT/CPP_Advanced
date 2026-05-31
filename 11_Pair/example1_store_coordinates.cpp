#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; cin >> n; 
	vector<pair<int, int> coordinates;
	for (int i = 0; i < n; i++){
		int x, y; 
		cin >> x >> y;
		coordinates.push_back({x, y});
	}
	cout << "Coordinates:\n";
	for (const auto& point : coordinates){
		cout << "(" << point.first << ", " << point.second << ")\n";
	}
    return 0;
}


