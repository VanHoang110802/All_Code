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
    cout << n << " ";
    for(int i = n; i >= 2; )
    {
        if(i%2==0) i/=2;
        else i=3*i+1;
        cout << i << " ";
    }
    return 0;
}
