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
        string s,c;
        cin>>n>>c;
        cin>>s;
        s=s+s;
        n=n+n;
        brk = N;
        ah=0;
        for ( i = n-1; i >= 0; i--)
        { 
            if(s[i]=='g')
            {
                brk=i;
            }
            
            if(s[i]==c[0] and brk!=N)   //brk!=N is for not checking before finding g
            {
                ah=max(abs(brk-i),ah);
            
            }
        }
        

        
            cout<<ah<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 