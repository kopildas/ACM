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
        
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            n-=2;
            for ( i = 0; i < n; i+=2)
            {
                cout<<1<<" "<<-1<<" ";
            }
            cout<<1<<" "<<-1;
            cout<<endl;
            
        }
        
    }
    

    
    
    
        
        
       

    return 0;
} 