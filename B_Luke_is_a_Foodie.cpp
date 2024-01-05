// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    bool flag=true;

    lg brk, n,j, t, k,h,m,ah,am,a,b,c,s,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        cin>>k;
        // v must be in a range of a-x to a+x
        lg l=abs(k-x);
        lg r=k+x;
        lg cnt=0;
        for (size_t i = 0; i < n-1; i++)
        {
                cin>>k;
                // update the range
                l=max(l,(abs(k-x)));
                r=min(r,(k+x));
                // if range is over than change happen and update range
                if( l > r)
                {
                    cnt++;
                    l=abs(k-x);
                    r=k+x;
                }
        }

            cout<<cnt<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 