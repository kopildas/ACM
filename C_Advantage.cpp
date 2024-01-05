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
    
        cin>>n;
        while (n--)
        {
            cin>>k;
            vector<lg>v(k),dup(v);
            for ( i = 0; i < k; i++)
                {
                    scanf("%lld",&v[i]);
                    dup[i]=v[i];
                }
            sort(v.begin(),v.end());
            ah=v[k-1];
            
            for ( i = 0; i < k; i++)
                {
                    if(dup[i]==ah)
                        cout<<dup[i]-v[k-2]<<" ";
                    else
                        cout<<dup[i]-ah<<" ";
                }
            
            cout<<endl;
                         
            

        }
        
        
       
        
        
           
       

    return 0;
} 