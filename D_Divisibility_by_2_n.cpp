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
        vector<lg>v(n);
        for (auto &it : v)
        {
            cin>>it;
        }
        lg cnt=0;
        for ( i = 0; i < n; i++)
        {
            while (v[i]%2==0)
            {
                cnt++;
                v[i]/=2;
            }
            
        }

        vector<lg>c;
        lg cont=0;
        for ( i = 2; i < n; i++)
        {
            j=i;
            cont=0;
            while(j%2==0)
            {
                cont++;
                j/=2;
            }
            c.push_back(cont);
        }
        sort(c.begin(),c.end());
        
        lg ans=0;
        if(cnt<n)
        for ( i = n-k; i >= 0 and n-cnt>0; i--)
        {
            cnt+=c[i];
            ans++;
        }
        if(cnt<n)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
        
        
        
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 