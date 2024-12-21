#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

#define var auto
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int mx = a[0], ans = 0;
    for(int i = 1; i < n; ++i)
    {
        mx = max(a[i], mx);
        ans += mx - a[i];
    }
    cout << ans;
    return 0;
}
