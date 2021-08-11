#include <bits/stdc++.h>
using namespace std;
#define loop(i, l, h) for (int i = l; i < h; i++)
#define endl "\n"
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;
    t--;
    do
    {
        ll n, x;
        cin >> n >> x;
        ll res = 0;
        if (x >= n)
        {
            cout << 1 << endl;
            continue;
        }
        // bool isgot=false;
        ll num = n;
        vector<ll> arr(16, 0);
        arr[0] = 1;
        ll curr = 2;
        arr[1] = curr;
        loop(i, 2, 16)
        {
            curr *= 4;
            arr[i] = curr;
        }
        bool isgot = 0;
        if (x != 0)

        {
            ll power = 2;
            while (power < num)
            {
                power *= 4;
            }
            num -= power;
            res++;
            if (num <= x)
            {
                res++;
                num = 0;
                isgot = true;
                // break;
            }
            else
            {
                while (n != 0)
                {
                    ll temp = res;
                    if (temp % 2 == 0)
                        temp--;
                    // if((num-x)>0 && num-arr[(temp + 1) / 2]>0)
                    num -= max(x, arr[(temp + 1) / 2]);
                    res++;
                }
            }
        }
        else
        {
            ll power = 2;
            while (power < num)
            {
                power *= 4;
            }
            if(power>num) power/=4;
            num -= power;
            res++;
            cout<<num;
            if (num <= x)
            {
                res++;
                num = 0;
                isgot = true;
                // break;
            }
            else
            {
                while (n != 0)
                {
                    ll temp = res;
                    if (temp % 2 == 0)
                        temp--;
                    // if((num-x)>0 && num-arr[(temp + 1) / 2]>0)
                    num -= max(x, arr[(temp + 1) / 2]);
                    res++;
                }
            }
        }
        if (num != 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << res << endl;

    } while (t--);

    return 0;
}