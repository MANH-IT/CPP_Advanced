#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int a, b, c; 
	cin >> a >> b >> c;
	int result = 4*a*b+3*c;
	cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
	cout << "Expression = " << result << "\n";
	return 0;
}


