#include <bits/stdc++.h>
using namespace std;

pair<int, int> find_min_max(const vector<int>& arr){
	if (arr.empty()){
		throw runtime_error("Array is empty");
	}
	int max_val = arr[0];
	int min_val = arr[0];
	
	for (size_t i = 1; i < arr.size(); i++){
		if (arr[i] > max_val) max_val = arr[i];
		if (arr[i] < min_val) min_val = arr[i];
	}
	return {min_val, max_val};
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "No elements\n";
        return 0;
    }
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    try {
        auto [min_val, max_val] = find_min_max(arr);
        cout << "Maximum value: " << max_val << '\n';
        cout << "Minimum value: " << min_val << '\n';
    } catch (const exception& e) {
        cout << "Error: " << e.what() << '\n';
    }
    
    return 0;
    return 0;
}


