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

    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        vector<lg>v,v2,v3,v4;
        for (lg i = 0; i < a; i++)
        {
            cin>>k;
            v.push_back(k);
        }
        for (lg i = 0; i < a; i++)
        {
            cin>>k;
            v2.push_back(k);
            
        }
        lg ans=0;
        for (lg i = 0; i < a-1; i++)
        {
            for (lg j = i+1; j < a; j++)
            {
                if(v[i]>=v[j])
                {
                    ans++;
                    v3.push_back(i+1);
                    v4.push_back(j+1);
                    ah=v[i];
                    v[i]=v[j];
                    v[j]=ah;
                    ah=v2[i];
                    v2[i]=v2[j];
                    v2[j]=ah;
                    
                }
            }
            
        }
        
        bool flg=false;
        for (lg i = 0; i < a-1; i++)
        {
            if(v2[i]>v2[i+1])
            {
                 
                flg=true;
                break;
            }
        }

        if(flg)
            cout<<-1<<endl;
        else
        {
            cout<<ans<<endl;
            for (lg i = 0; i < ans; i++)
            {
                cout<<v3[i]<<" "<<v4[i]<<endl;
            }
            
        }
        

        
        
        
    }
    
    
        
        
       

    return 0;
}