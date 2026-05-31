#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<pair<double, pair<int, string>>> students;
    
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        double score;
        cin >> name >> age >> score;
        students.push_back({score, {age, name}});
    }
    
    sort(students.begin(), students.end(),
         [](const auto& a, const auto& b) {
             if (a.first != b.first) {
                 return a.first > b.first;
             }
             return a.second.first < b.second.first;
         });
    
    cout << fixed << setprecision(3);
    for (const auto& student : students) {
        cout << student.second.second << " " << student.second.first 
             << " " << student.first << '\n';
    }
    
    return 0;
}
