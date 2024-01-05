// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];


int main()
{
    
    bool flag=true;

    lg brk, n,j, t, k,h,i,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
       
        bool flg=false;
        for ( i = 2; i*i <= n; i++)
        {
            if(n%i==0)
                {
                    flg=true;
                    k=n/i;
                    break;
                }
        }
        
        
        
        if(flg)
            cout<<k<<" "<<n-k<<endl;
        else
            cout<<1<<" "<<n-1<<endl;
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 