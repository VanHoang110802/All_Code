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
    for(int i = 1; i <= n; ++i)
    {
        int x, y; cin >> x >> y;
        int z = max(x, y);
        int z2 = (z - 1) * (z - 1);
        int ans = 0;
        if(z % 2)
        {
            if(x == z)
            {
                ans = z2 + y;
            }
            else
            {
                ans = z2 + 2 * z - x;
            }
        }
        else
        {
            if(y == z)
            {
                ans = z2 + x;
            }
            else
            {
                ans = z2 + 2 * z - y;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
