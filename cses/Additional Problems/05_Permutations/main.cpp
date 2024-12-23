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
    if(n == 1)
    {
        cout << n;
        return 0;
    }
    if(n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if(n % 2 == 0)
    {
        for(int i = 2; i <= n; i += 2) cout << i << " ";
        for(int i = 1; i < n; i += 2) cout << i << " ";
    }
    else
    {
        for(int i = n - 1; i > 0; i -= 2) cout << i << " ";
        for(int i = n; i > 0; i -= 2) cout << i << " ";
    }
    return 0;
}
