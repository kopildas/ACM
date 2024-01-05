#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n,j,q, t, k,h,m,ah,am,a,b,tmp;
    lg i;
    cin >> t;
    lg ca=1;
    while (t--)
    {

        lg n,q;
        cin>>n;
        i=1;
        ca=0;
        while (1)
        {
            if(i*2<=n)
                {
                    i++;
                    ca++;
                }
            else
                break;
        }
        if(n%2==0 and n%3==0)
            ca--;
        cout<<ca<<endl;
    
             
    }

    return 0;
}