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
        for (lg i = 0; i < a; i++)
        {
            if(s[i]=='U')y++;
            if(s[i]=='D')y--;
            if(s[i]=='R')x++;
            if(s[i]=='L')x--;

            if(x==1 and y==1)
            {
                flg=true;
                break;
            }
            
        }
        if(flg)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        

        
        

        
        
        
    }
    
    
        
        
       

    return 0;
}