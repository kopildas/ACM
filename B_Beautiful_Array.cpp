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

    lg brk, n,j, t, k,h,m,ah,am,a,b,c,s;
    cin>>t;
    while (t--)
    {
        lg s_len;
        cin>>n>>k>>b>>s;
        if(s<k*b or s> (k*b)+((k-1)*n))
            {
                cout<<"-1"<<endl;
                continue;
            }
        vector<lg>v(n,0);
        v[0]=k*b;
        brk=s-k*b;
        for (size_t i = 0; i < n; i++)
        {
                ah=min(brk,k-1);
                v[i]+=ah;
                cout<<v[i]<<" ";
                brk-=ah;
            
        }
        cout<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 