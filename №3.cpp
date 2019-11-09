#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);}
#define pb push_back
#define ll long long
#define pl pair<ll,ll>
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector< vector<ll> >
using namespace std;
const int tinf = (int)1e9 + 7;
const ll inf = (ll)1e18 + 7;
const int N = 4e5 + 5;
int main()
{
    IOS
    ll x1, x2, y1, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll z3 = (x3 - x1)*(y2 - y1) - (y3 - y1)*(x2 - x1);
    ll z4 = (x4 - x1)*(y2 - y1)-(y4 - y1)*(x2 - x1);
    ll z1 = (x1 - x3)*(y4 - y1)-(y1 - y3)*(x4 - x3);
    ll z2 = (x2 - x3)*(y4 - y3) - (y2 - y3)*(x4 - x3);
    ll L = max(min(x1, x2), min(x3, x4)),
       R = min(max(x1, x2), max(x3, x4)),
       N = max(min(y1, y2), min(y3, y4)),
       W = min (max(y1, y2), min (y3, y4));
    if (L <= R && W >= N && !max(z1, x2) && !max(z3, z4)){
        cout << "Yes";
        return 0;
    }
    if (!max(z1, z2) && !max(z3, z4)){
        cout << "No";
        return 0;
    }
    if (z1*z2 > 0 || z3*z4 >0) {
        cout << "No";
    } else {
        cout << "Yes";
    }
}
 