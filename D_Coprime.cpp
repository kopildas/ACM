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
        bool flag=false;
        cin>>n;
        vector<int>v(n);
        vector<int>dat;
        for(auto &i : v) cin>>i;


        for(i=0;i<n;i++)
            {
                if(v[i]==1)
                {
                    dat.push_back(i+i+2);
                    flag=true;
                }

                for(j=i+1;j<n;j++)
                {
                    ah=__gcd(v[i], v[j]);
                    if(ah==1)
                    {
                        dat.push_back(i+j+2);
                        flag=true;
                    }
                }
                
            }


        
        

        if(flag)
            cout<<*max_element(dat.begin(), dat.end())<<endl;
        else
            cout<<-1<<endl;


        


    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 