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
    string s; cin >> s;
    int ans = 1, c = 0;
    char l = '*';
    for(char d : s)
    {
        if(d == l)
        {
            ++c;
            ans = max(ans, c);
        }
        else
        {
            l = d;
            c = 1;
        }
    }
    cout << ans;
    return 0;
}
