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
    int s = n * (n + 1) / 2,tmp_s = 0;
    for(int i = 1; i <= n - 1; ++i)
    {
        int x; cin >> x;
        tmp_s += x;
    }
    cout << s - tmp_s;
    return 0;
}
