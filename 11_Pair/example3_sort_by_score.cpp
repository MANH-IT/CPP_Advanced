#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<pair<double, string>> students;
    
    for (int i = 0; i < n; i++) {
        string name;
        double score;
        cin >> name >> score;
        students.push_back({score, name});
    }
    
    sort(students.begin(), students.end(),
         [](const auto& a, const auto& b) {
             if (a.first != b.first) {
                 return a.first > b.first;
             }
             return a.second < b.second;
         });
    
    cout << fixed << setprecision(3);
    for (const auto& [score, name] : students) {
        cout << name << ": " << score << '\n';
    }
    
    return 0;
}
