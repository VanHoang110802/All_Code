#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;

#define var auto
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    //int n;
    //cin >> n;
    //for(int i = 1; i <= n; ++i)
    {
        //for(int j = 1; j <= n; ++j)
        {
            //int x = i, y = j;
            int x, y;
            cin >> x >> y;
            int z = max(x, y); /// xác định lớp mà ô (x, y) thuộc về.
            int z2 = (z - 1) * (z - 1); /// tính số ô trong tất cả các lớp trước lớp z, vì số ô trong mỗi lớp là diện tích của hình vuông lớp đó.
            int ans = 0;
            //cout << x << " " << y << " " << z << " " << z2 << "\n";
            if(z % 2)
            {

                if(x == z)
                {
                    ans = z2 + y;
                    cout << ans << " ";
                }
                else
                {
                    ans = z2 + 2 * z - x;
                    cout << ans << " ";
                }

            }
            else
            {
                if(y == z)
                {
                    ans = z2 + x;
                    cout << ans << " ";
                }
                else
                {
                    ans = z2 + 2 * z - y;
                    cout << ans << " ";
                }

            }
            cout << "\n";
        }

    }
    return 0;
}

/*
6
01 02 09 10 25 26
04 03 08 11 24 27
05 06 07 12 23 28
16 15 14 13 22 29
17 18 19 20 21 30
36 35 34 33 32 31
*/

/*
8
01 02 09 10 25 26 49 50
04 03 08 11 24 27 48 51
05 06 07 12 23 28 47 52
16 15 14 13 22 29 46 53
17 18 19 20 21 30 45 54
36 35 34 33 32 31 44 55
37 38 39 40 41 42 43 56
64 63 62 61 60 59 58 57
*/
