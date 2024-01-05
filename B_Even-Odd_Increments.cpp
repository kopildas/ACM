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
   

    lg brk, n,i,j, t, k,h,m,ah,am,a,b,c,x,q;
    cin>>t;
    while (t--)
    {
        bool odd_flag=true,ev_flag=true;
        cin>>n>>q;
        vector<int>v(n);
        lg ev=0,od=0,sum=0;
        for(auto &i : v){ cin>>i;
            if(i%2==0)ev++;
            else
                od++;
            sum+=i;
        }

        for(i=0;i<q;i++)
            {
                cin>>a>>b;
                if(a==0)
                {
                    
                    if(ev_flag)
                    {
                        ah=ev*b;
                        sum+=ah;
                        if(b%2!=0)
                        {
                            od+=ev;
                            ev-=od;
                            odd_flag=true;
                        }

                    }
                    if(b%2!=0)ev_flag=false;
                    else
                        odd_flag=true;
                    cout<<sum<<endl;
                }
                else if(a==1)
                    {
                        
                        if(odd_flag)
                        {
                            ah=od*b;
                            sum+=ah;
                            if(b%2!=0)
                            {
                                ev+=od;
                                od-=od;
                                ev_flag=true;
                            }
                        }
                        if(b%2!=0)odd_flag=false;
                        else
                            ev_flag=true;
                        cout<<sum<<endl;
                }
            }


    
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 