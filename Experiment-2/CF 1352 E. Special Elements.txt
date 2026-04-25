#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int total = 0;
        for (int i = 0; i < n; i++) total += a[i];
        vector<bool> possible(total + 1, false);
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (j > i && sum <= total) {
                    possible[sum] = true;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= total && possible[a[i]]) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
