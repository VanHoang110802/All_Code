#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <iomanip>
using namespace std;

#define var auto
#define int long long
//vector<int> a(100007, 0);

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, a; cin >> n >> m >> a;
    double tmp_n = (double)n / a;
    double tmp_m = (double)m / a;
    int int_tmp_n = tmp_n;
    int int_tmp_m = tmp_m;
    if((int)tmp_n != tmp_n) int_tmp_n++;
    if((int)tmp_m != tmp_m) int_tmp_m++;
    cout << int_tmp_n * int_tmp_m;
    return 0;
}