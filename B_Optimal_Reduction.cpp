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
    bool flag=true;

    lg brk, n,j, t, k,h,m,ah,am,a,b,c,s;
    cin>>t;
    while (t--)
    {
        lg s_len;
        cin>>n;
        vector<lg>v;

        for (size_t i = 0; i < n; i++)
        {
                cin>>k;
                v.push_back(k);
        }

        m=0;
        ah=am=1;
        j=n-1;
        while (m<n-1 and v[m]<=v[m+1])
        {
            ah++;
            m++;
        }
        while (j>0 and v[j]<=v[j-1])
        {
            am++;
            j--;
        }

        if(ah+am>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 