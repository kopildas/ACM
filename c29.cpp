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

    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    
    cin>>n;
    vector<lg>s,res;
    for (lg i = 0; i < n; i++)
    {
        cin>>m;
        s.push_back(m);
        
        
    }
    lg ans=0;
    for (lg i = 0; i < n; i++)
    {
        while (1)
        {
            if(ar[s[i]])
            {
                res.push_back(ans);
                ans=0;
                ar[s[i]]=0;
                break;
                
            }
            ar[s[i]]=1;
            ans++;
            i++;
        }
        
        
        
    }
    cout<<*max_element(res.begin(), res.end())<<endl;
    
    
        
        
       

    return 0;
}