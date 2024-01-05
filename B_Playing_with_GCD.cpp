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
        vector<lg>v(n);
        for (auto &it : v)
        {
            cin>>it;
        }
        lg cnt=v[0];
        bool flg= true;
        for ( i = 0; i < n-1; i++)
        {
            if(v[i]<v[i+1])
                {flg=false;
                break;
                }
              
            
        }

        
        if(flg)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
        
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 