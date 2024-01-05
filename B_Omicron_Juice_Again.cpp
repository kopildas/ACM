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
    lg i;
    cin >> t;
    lg ca=1;
    while (t--)
    {

        lg n,q;
        lg gl[3];
        cin>>gl[0]>>gl[1]>>gl[2]>>k;
        sort(gl,gl+3);
        if(((gl[1]-gl[0])== k) and ((gl[2]-gl[1])==k))
            cout<<"Case "<<ca<<": "<<"Peaceful"<<endl;
        else
            cout<<"Case "<<ca<<": "<<"Fight"<<endl;
        ca++;
    
             
    }

    return 0;
}