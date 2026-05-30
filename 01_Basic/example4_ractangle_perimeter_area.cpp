#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	long long length, width;
	cin >> length >> width;
	
	long long perimeter = 2 * (length + width);
	long long area = length * width;
	
	cout << "Length: " << length << '\n';
	cout << "Width: " << width << '\n';
	cout << "Perimeter: " << perimeter << '\n';
	cout << "Area: " << area <<'\n';
    return 0;
}


