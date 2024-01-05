#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b;
    lg i=0;
    cin >> t;
    h=t;
    vector<lg>v;
    while (t--)
    {       
        cin>>ar[i++];        
    }
    sort(ar,ar+h);
    cin>>k;
    i=0;
    t=h;
    while (h--)
    {       
        m=k%ar[i++];
        v.push_back(m);       
    }
    sort(v.begin(),v.end());
    i=0;
    lg bigmod=v[t-1],tmp;
    while (t--)
    {
        if((k%ar[i]!=bigmod)){
            tmp=bigmod;
            bigmod=bigmod%ar[i];
            bigmod=max(tmp,bigmod);
        }
    }
    cout<<bigmod<<endl;
    


    return 0;
}