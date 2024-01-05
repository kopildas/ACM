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
        vector<int>v(n);
            k=2;
            for(i=0;i<n/2;i++){
                v[i]=k;
                k+=2;
            }
            k=1;
            for(i=n/2;i<n;i++)
            {
                v[i]=k;
                k+=2;
            }

        
        
        for(auto &i : v){ cout<<i<<" ";
        }
       

            cout<<endl;


        
    }
    
    
    
    
    
        
        
       

    return 0;
} 