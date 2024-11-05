// https://atcoder.jp/contests/abc205/tasks/abc205_b
#include <bits/stdc++.h>
using namespace std;

//ofstream fout("filename.out");
//ifstream fin("filename.in");

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& x : A)
        cin >> x;

    sort(A.begin(), A.end());
    for (int i = 1; i < n; i++) {
        if (i != A[i - 1]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
