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
            lg l,r,k;
            cin>>n>>m;
            vector<lg>v(n);
            lg cnt=0;

            
            
            
            for ( i = 0; i < n; i++)
                v[i]=i+1;


            if(m>=2 and m!=n)
            {
                k=n-m;
                ah=v[k];
                v[k]=1;
                v[0]=ah;
            }

            for ( i = 0; i < n; i++)
                cout<<v[i]<<" ";
                         
            cout<<endl;
            v.clear();
           
        }
        

         // Lets dance baby 
       

    return 0;
} 