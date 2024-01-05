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

    lg brk, n,j,x, t, k,h,m,ah,am,a,b,c;
    
    cin>>n>>x;
    vector<lg>v,v1,res;
    
    set<lg>s;
    for (lg i = 0; i < n; i++)
    {
        cin>>m;
        v.push_back(m);
        
    }
    for (lg i = 0; i < n; i++)
    {
        cin>>m;
        v1.push_back(m);
        
    }
    for (lg i = 0; i < n; i++)
    {
        ar[v[i]]=v1[i];
        
    }
    sort(v.begin(),v.end());
    
    lg sum=0,ans=0;


    for (lg i = 0; i < n-1; i++)
    {
        sum=v[i];
        ans=ar[v[i]];
        for (lg j = i+1; j < n; j++)
        {
            sum+=v[j];
            if(sum<=x)
            {
                ans+=ar[v[j]];
            }
            else
                {
                    res.push_back(ans);
                    break;
                }
        }
        
        
    }


    
    cout<<*max_element(res.begin(), res.end())<<endl;
    
    
        
        
       

    return 0;
}