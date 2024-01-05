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
        vector<lg>v(n),ans(n);
        for ( i = 0; i < n; i++)
            scanf("%lld",&v[i]);
        sort(v.begin(),v.end());
        lg mid=n/2-1;
        for ( i = 0,k=1; k <= mid*2; k+=2,i++) // all odd position(ans) will contain half lowest value of sorted vector(v)
        {
            ans[k]=v[i];
        }
        for ( i = mid,k=0; k < mid*2; k+=2,i++) // all even positoin(ans) will contain greater value than middle one
        {
            ans[k]=v[i];
        }
        
        if(n%2!=0)
        {
            mid++;
            ans[n-3]=v[n-2];
            ans[n-2]=v[n-3];
            ans[n-1]=v[n-1];
        }
        else
        {
            ans[n-2]=v[n-2];
            ans[n-1]=v[n-1];
        }
        
        cout<<mid<<endl;
        for ( i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        
        
            
  
        
    
    
    
    
    
    
        
        
       

    return 0;
} 