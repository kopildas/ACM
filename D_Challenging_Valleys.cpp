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
        while (n--)
        {
            cin>>k;
            vector<lg>v(k),dup(v);
            m=0;
            for ( i = 0; i < k; i++)
                {
                    scanf("%lld",&dup[i]);
                    if(i==0)
                        v[m++]=dup[i];
                    if(i>0 and dup[i]!=dup[i-1])
                        v[m++]=dup[i];

                }
            ah=0;
            
            for ( i = 1; i < m-1; i++)
                {
                    if(i==1 and v[0]<v[i])ah++;
                    else if (v[i]<v[i-1] and v[i]<v[i+1])
                    {
                        ah++;
                    }
                }
            if(v[i]<v[i-1])ah++;
            if(ah<2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                         
            

        }
        
        
       
        
        
           
       

    return 0;
} 