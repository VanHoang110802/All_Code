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
    int a, b; cin >> a >> b;
    if(((a + b) % 3 == 0) && (2 * a >= b) && (2 * b >= a))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
