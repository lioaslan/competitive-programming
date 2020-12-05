#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl;
#define debugarr2d(x, n, m)                \
    {                                      \
        for (int _ = 0; _ < n; ++_)        \
        {                                  \
            for (int __ = 0; __ < m; ++__) \
                cout << x[_][__] << " ";   \
            cout << endl;                  \
        }                                  \
        cout << endl;                      \
    }
#define debugarr(x, n)              \
    {                               \
        for (int _ = 0; _ < n; ++_) \
            cout << x[_] << " ";    \
        cout << endl;               \
    }
#define debugvi(x)                         \
    {                                      \
        for (int _ = 0; _ < x.size(); ++_) \
            cout << x[_] << " ";           \
        cout << endl;                      \
    }

#define fi first
#define se second
#define pb push_back
using namespace std;

typedef int64_t ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("data.inp", "r", stdin);
    freopen("data.out", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a + b) % 2 != 0)
        {
            if (a != 0 || d != 0)
                cout << "Ya ";
            else
                cout << "Tidak ";

            if (b != 0 || c != 0)
                cout << "Ya ";
            else
                cout << "Tidak ";
            cout << "Tidak Tidak";
        }
        else
        {
            cout << "Tidak Tidak ";

            if (b != 0 || c != 0)
                cout << "Ya ";
            else
                cout << "Tidak ";

            if (a != 0 || d != 0)
                cout << "Ya";
            else
                cout << "Tidak";
        }
        cout << endl;
    }
    return 0;
}
