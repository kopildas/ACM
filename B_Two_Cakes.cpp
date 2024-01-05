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

    lg brk, n,j, t,h,i,m,ah,am,a,b,c,x;
    
       
            lg l,r,k;
            cin>>l>>r>>k;
            lg ans=0;
            ah=min(r,k);
            for ( i = 1; i <=ah; i++)
            {
                if((r/i)+(k/(i))>=l)
                    ans=i;
            }
            
 
                cout<<ans<<endl;
                         
            

        
        
        
       
        
        
           
       

    return 0;
} 