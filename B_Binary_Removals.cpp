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
        string s;
        cin>>s;
        lg len =s.size();
        lg mid=len/2;

        lg one=0,zro=0;
        for (i = 0; i < mid; i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
        }
        for ( i = mid; i < len; i++)
        {
            if(s[i]=='0')
            {
                zro++;
            }
        }
        if(len%2!=0)
            ah=mid+1;
        else
            ah=mid;

        if(one==mid and ah==zro and 2<len)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
            
    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 