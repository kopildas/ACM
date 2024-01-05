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

    lg brk, n,i,j, t, k,h,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<lg>v  ;
        vector<lg>chk(n);

        brk= sqrt(n);
        if(brk*brk!=n)brk++;
        brk*=brk;

        if(sqrt(brk)>=5)
        {
            for(j=n-1;j>5;j--)
            {
                v.push_back(brk-j);
            }
            v.push_back(4);
            v.push_back(5);
            v.push_back(1);
            v.push_back(2);
            v.push_back(3);
            v.push_back(0);
        }
        else
        {
            if(n>8)
            {
                
                for(j=n;j>=0;j--)
                {
                    v.push_back(brk-j);
                    //cout<<brk-j<<" ";
                }
            }
            else{
                for(j=n-1;j>1;j--)
                {
                    v.push_back(brk-j);
                    //cout<<brk-j<<" ";
                }
                v.push_back(0);
                v.push_back(1);
            }
        }
        
        

        
        for(j=v.size()-1;j>=0;j--)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        


    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 