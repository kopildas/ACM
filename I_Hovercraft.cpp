#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lg brk, n,j,q, t, k,h,m,ah,am,a,b,tmp;
    lg i,l,w;
    while (1)
    {
        cin >> l>>w;
        if(l==0 and w==0)
            return 0;
        brk=abs(l-w);
        brk=brk/6;
        lg ans=(l+w)-brk;
        float res=float(ans-0.75);
        printf("%.4f\n",res);
    }
    
    return 0;
}