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
   

    lg brk, n,i,j, t, k,h,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        bool flag=true;
        cin>>n;
        vector<int>v(n);
        for(auto &i : v) cin>>i;


        for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(v[i]==v[j])
                    {
                        flag=false;
                        break;
                    }
                }
                if(!flag)
                    break;
            }


        
        

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        


    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 