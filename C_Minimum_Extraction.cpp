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
   

    lg brk, n,i,j, t, k,h,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {

        cin>>n;
         
        

        if(n==1)
        {
            cin>>k;
            cout<<k<<endl;
        }
        else{
            vector<lg>v(n),mini;
            for(auto &i : v)cin>>i;
            
            sort(v.begin(), v.end());
            
            ah=v[0];
                for (i = 0; i < n-1; i++)
                {
                    ah=max(ah,v[i+1]-v[i]);

                    
                }
                
                    
                    
                cout<<ah<<endl;
        }
        
            

        
    }
    
    
    
    
    
        
        
       

    return 0;
} 