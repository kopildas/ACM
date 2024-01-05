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
        cin>>n;
        vector<lg>v(n),pre(v);
        for ( i = 0; i <n; i++)
        {
            scanf("%lld",&v[i]);
            if(i==0)
            {
                pre[i]=v[i];
                ar[pre[i]]=i+1; // it will contain index of pre sum value;
            }
            else
            {
                pre[i]=pre[i-1]+v[i]; // calculate pre sum
                if(i>=1)
                    ar[pre[i]]=i+1;
                else
                    ar[pre[i]]=i;
                 // it will contain index of pre sum value;
            }
            
        }
        
        
    
        lg ans=n;
        flag=false; // help in if any segment is available or not 
        bool all_seg=false;
        for (i = 0; i < n; i++)
        {
            am=0;
            // cout<<ar[pre[i]]<<" "<<pre[i]<<endl;
            sum=pre[i];
            lg cur=ar[sum]; // 1st position
            sum+=sum; //segment sum

            
            while(ar[sum] and sum<=pre[n-1]) //if same sum is available than ar[sum] will be >0 and sum should not over the total sum
            {
                flag=true;
                // cout<<"ar[sum] "<<ar[sum]<<endl;
                am=max(am,ar[sum]-cur); //max length of segment
                cur=ar[sum];    //current position update
                if(cur==n)
                    all_seg=true; 
                sum+=sum; // next segment sum
                
            }
            //sum-=sum;
            if(flag)
                ans=min(ans,am); // min of all posible segment
            flag=false;    
            //am=0;                    
        }

        // i didnt check all segment length are equal or not of given length 

        cout<<ans<<endl;  
     
    
        for ( i = 0; i < n; i++) // for re assign all index is 0
        {
            ar[pre[i]]=0;
        }
    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 