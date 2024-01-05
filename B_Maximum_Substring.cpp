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
        cin>>n;
        string s;
        cin>>s;
        s=s+'5'; //for testcase 1000
        n++;
    
        lg one=0,zro=0,maxo=0,maxz=0;
        for (i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                one++;
                for ( j = i+1; j < n; j++)  //count max substring of one
                {
                    if(maxo<one)
                            maxo=one; 


                    if(s[j]=='1')one++;
                    else{
                        
                        one=0;
                        i=j-1;
                        break;
                    }
                }
            }                      
        }

        for (i = 0; i < n; i++){
            if(s[i]=='0')
            {
                zro++;
                for ( j = i+1; j < n; j++)  //count max substring of zro
                { 
                    if(maxz<zro)
                            maxz=zro;
                   

                    if(s[j]=='0')zro++;
                    else{
                        
                        zro=0;
                        i=j-1;
                        break;
                    }
                }
            }
        }
        zro=one=0;
        for ( i = 0; i < n; i++)
                {
                    if(s[i]=='0')zro++;
                    else if(s[i]=='1')
                        one++;
                }

        
    lg mx=max(maxo,maxz);
    lg ans=max((mx*mx),(one*zro));       
    cout<<ans<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 