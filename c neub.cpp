#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
 lg ar[N];

bool isPrime(int n){
    int count = 0;

    // 0, 1 negative numbers are not prime
    if(n < 2)
        return false;
    
    for(int i = 2;i <= sqrt(n); i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    // if reached here then must be true
    return true;
}



int main()
{
    lg brk, n, t, k,h,m,ah,am,i,j;

    lg up;
    
    up=10000;
    vector<lg>prim;
    for(lg i = 1; i <= up; i++)
        if(isPrime(i))
            {
                 prim.push_back(i);
                 ar[i]=i;
            }



    cin>>t;
    while (t--)
    {
        cin>>k;
        for ( i = k*2; ; i--)
        {
            if(ar[i]==i)
            {
                ah=i;
                break;
                
            }
        }

        lg ind;
        for (lg i = 0; i < prim.size(); i++)
        {
            if(ah==prim[i])
                {
                    ind=i;
                    break;
                }
        }
        lg twp=ind;
        for (lg i = 0; i < ind; i++)
        {
            if((prim[i]+prim[twp])==2*k)
                {
                    cout<<prim[i]<<" "<<prim[twp]<<endl;
                    break;
                }
            twp--;
        }
        
        
        ar[ah]=0;
        
        
    }
    
    
    
        
        
             
    

    return 0;
}