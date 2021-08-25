#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int count[7] = {4,4,4,4,4,4,4};
        string arr[] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
        if (n == 29)
        {
            for (int i = 0; i < 7; i++)
            {
                if (arr[i] == s)
                {
                    count[i]++;
                    // count[i + 1]++;
                }
            }
        }
        else if (n == 30)
        {
            for (int i = 0; i < 7; i++)
            {
                if (arr[i] == s)
                {
                    count[i]++;
                    count[(i + 1) % 7]++;
                    // count[i]
                }
            }
        }
        else if (n == 31)
        {
            for (int i = 0; i < 7; i++)
            {
                if (arr[i] == s)
                {
                    count[i]++;
                    count[(i + 1) % 7]++;
                    count[(i + 2) % 7]++;
                }
            }
        }
        for (int i = 0; i < 7; i++)
            cout << count[i] << " ";
        cout << endl;
    }

    return 0;
}