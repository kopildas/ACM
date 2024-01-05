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
        vector<lg>v(n-1);
        cin>>ah;
        
        
        for (auto &it : v)
        {
            cin>>it;
        }
        sort(v.begin(),v.end());
        if(ah>v[0])
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 