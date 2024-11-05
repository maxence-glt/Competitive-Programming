//https://atcoder.jp/contests/abc204/tasks/abc204_b
#include <bits/stdc++.h>
using namespace std;

//ofstream fout("filename.out");
//ifstream fin("filename.in");

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int curr, out = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr > 10)
            out += curr - 10;
    }

    cout << out;

    return 0;
}
