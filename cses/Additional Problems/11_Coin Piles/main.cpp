#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

#define var auto
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        if(((x + y) % 3 == 0) && (2 * x >= y) && (2 * y >= x))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}
