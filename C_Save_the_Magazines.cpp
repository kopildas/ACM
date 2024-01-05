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

        cin>>n;
        string s;
        cin>>s;
        vector<int>v(n);
        for(auto &i : v)cin>>i;
        lg ans=0;
        if (s[0]=='1')
        {
            ans+=v[0];
        }
        
        for (i = 1; i < n; i++)
        {
            if (s[i]=='1')
            {
                if (v[i]<v[i-1])
                {
                    if(s[i-1]=='0')
                    {
                        ans+=v[i-1];
                        s[i]='0';
                    }
                    else
                    {
                        ans+=v[i];
                        s[i]='0';
                    }
                }
                else if( v[i]>=v[i-1] and i<n-1 and s[i+1]=='1' and v[i]>v[i+1]) //if previous box is less than current box 
                {                                                              //and curren box is greater than next one 
                    ans+=v[i-1];                                               //than ans will be previous box.
                    s[i]='0';
                }
                else
                {
                    ans+=v[i];
                    s[i]='0';
                }  

            }
            
        }
        
            
            
        cout<<ans<<endl;
            

        
    }
    
    
    
    
    
        
        
       

    return 0;
} 