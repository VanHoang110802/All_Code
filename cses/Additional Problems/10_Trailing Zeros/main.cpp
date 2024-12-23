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
    int cnt = 0;
    for(int i = 5; i <= n; i *= 5) cnt += n / i;
    cout << cnt << '\n';

    return 0;
}
