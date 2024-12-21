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
        int a1 = i * i;
        int a2 = a1 * (a1 - 1) / 2;
        if(i > 2)
        {
            a2 = a2 - 4 * (i - 1) * (i - 2);
        }
        cout << a2 << "\n";
    }
    return 0;
}
