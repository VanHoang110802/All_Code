#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

#define var auto
#define int long long
const int mod = 1000000007;

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    int s = 1;
    for(int i = 1; i <= n; ++i)
    {
        s = 2 * s % mod;
    }
    cout << s << '\n';

    return 0;
}
