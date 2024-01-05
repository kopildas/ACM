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
        vector<lg>v(n);
        for ( i = 0; i < n; i++)
            scanf("%lld",&v[i]);
        lg sum1=0,sum2=0,ans=0;
        for ( i = 0,j=n; j>=i; ) // all odd position(ans) will contain half lowest value of sorted vector(v)
        {
            if(sum1<=sum2)
                sum1+=v[i++];
            else
                sum2+=[j];

            if(sum1==sum2)
                ans=sum1;
                         
            

        }
       
        cout<<ans;
        
        
           
       

    return 0;
} 