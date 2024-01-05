#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    lg i=1;
    cin >> t;
    lg ca=1;
    while (t--)
    {
        
        cin>>k;
        vector<lg>v,v2;
        vector<lg>::iterator it;
        set<lg>s;
 
    
        lg sum=0;
        
        for ( i = 0; i < k; i++)
        {
            cin>>h;
            s.insert(h);
            
        }
        for ( auto j: s)
            {
                sum+=j;
                cout<<j<<" ";   
            }
        cout<<endl;
        
       
        
        printf("Case %lld: %lld\n",ca,sum);
        
        
        ca++;
        
             
    }

    return 0;
}