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
    
    bool flag=false;

    lg brk, n,j, t, k,h,i,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        lg sum=0;
        cin>>n>>m;
        vector<lg>v(n),pre(v);
        for ( i = 0; i <n; i++)
            scanf("%lld",&v[i]);
        
        sort(v.begin(),v.end(),greater<lg>());
        for ( i = 0; i < n; i++)
        {
            if(i==0)
                pre[i]=v[i];
            else
                pre[i]=pre[i-1]+v[i]; // calculate pre sum
        }
        // for ( i = 0; i < n; i++)
        // {
        //     cout<<pre[i]<<" ";// calculate pre sum
        // }
        // cout<<endl;
    
        while (m--)
        {
            cin>>k;
            lg mid,low=0,high=n;

            while (low<high)
            {
                mid=(high+low)/2;
                if(k>pre[mid])
                    low=mid+1;
                else if(k==pre[mid])
                    {
                        low=mid+1;
                        break;
                    }
                else
                    high=mid;
            }
        
            if(low==n and pre[mid]<k)
                cout<<-1;
            else if(low==n and pre[low-1]==pre[n-1])
                cout<<low;
            else if(low<n and pre[mid]<k or pre[mid]>k)
                cout<<1+low;
            else if(low==n or low<n and pre[mid]==k)
                cout<<low;
            
                 cout<<endl;
        }
        
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 