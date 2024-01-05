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
    
    
        
        cin>>n>>m;
        vector<lg>v(n);
        
        for (auto &it : v)
        {
            cin>>it;
        }
        sort(v.begin(),v.end()); 
       
        brk = 0;
        ah=0;
        lg cnt=0;
        for ( i = n-1; i >= 0; i--)
        { 
            brk+=m/v[i];
            brk++;
            if(brk>n)break;
            else
                cnt++;
        }
        

        
            cout<<cnt<<endl;
        
    
    
    
    
    
    
        
        
       

    return 0;
} 