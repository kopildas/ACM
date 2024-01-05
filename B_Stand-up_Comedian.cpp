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

    lg brk, n,j, t, k,h,i,m,ah,am,a,b,c,d,x,ans=0;
    cin>>t;
    while (t--)
    {
        
        cin>>a>>b>>c>>d;
        ah=min(b,c);
        if(b)ah=b;
        else if(c)ah=c;
        if(a<d)
            {a=a*2+1;}
        else if(a==d)
           { a+=a;}
        else
            {if(d)
                {a+=a-d;}}
            

        if(a==0 and d==0)
            ans=ah;
        else if(d)
            ans=(ah*2)+a;
        else if(a and !d)
            ans=ah+a;
            
        cout<<ans<<endl;
        
        
        
        
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 