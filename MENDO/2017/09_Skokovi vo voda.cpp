#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,res = 0;
    cin>>n;
    int mashki[n];
 
    for (int i = 0; i<n; i++)
    {
        cin>>mashki[i];
    }
 
    int m;
    cin>>m;
    int zenski[m];
 
    for (int i = 0; i<m; i++)
    {
        cin>>zenski[i];
    }
 
    int r,k;
    cin>>r>>k;
 
    /*
    // M = K
    sort(zenski, zenski + m);
 
    if (m = k)
    {
        int cnt = 0;
        for (int i = 0; i<n; i++)
        {
            if (abs(mashki[i] - zenski[0]) <= r && abs(mashki[i]-zenski[m-1]) <= r)
            {
                cnt++;
            }
        }
 
        cout << cnt << endl;
 
        return 0;
    } else if (k == 1) {
        int res = 0,pi = 0, ki = 0;
 
        sort(zenski,zenski+m);
        sort(mashki, mashki+n);
 
 
        for (int i = 0; i<m; i++) {
            while(pi < n && abs(zenski[i] - mashki[pi]) > r) pi++;
            ki = max(ki,pi);
            while(ki<n && abs(zenski[i] - mashki[ki]) >= r) ki++;
            int new_res = ki-pi;
            res = max(res, new_res);
        }
 
        cout << res;
    } else {*/ //oficijalno resenie}
 
    sort(mashki, mashki+n);
    sort(zenski, zenski+m);
 
    for (int i = 0; i<m; i++) {
        if (i+k-1 >= m) {
            continue;
        }
 
        int malol = zenski[i] - r;
        int malod = zenski[i] + r;
        int golemol = zenski[i+k-1] -r;
        int golemod = zenski[i+k-1] +r;
 
        int lev_id = lower_bound(mashki, mashki+n, golemol) - mashki;
        int desen_id = upper_bound(mashki, mashki+n, malod) - mashki;
        res = max(res, desen_id-lev_id);
    }
 
    cout << res;
 
    return 0;
}