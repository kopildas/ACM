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
    
    cin>>t;
    while(t--)
    {
        cin>>a;
        string s;
        cin>>s;
        lg x=0,y=0;
        bool flg=false;
        for (lg i = 0, j=a-1; i < a,j>=0; i++,j--)
        {
            

            if(s[i]=='1' and s[j]=='0' or s[i]=='0' and s[j]=='1')
            {
                x+=2;
            }
            else
                break;
            
        }
        if((a-x)>=0)
            cout<<a-x<<endl;
        else
            cout<<0<<endl;
        
        

        
        

        
        
        
    }
    
    
        
        
       

    return 0;
}