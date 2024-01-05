// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;


#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];


// Time Complexity
// O(n)
bool isprime(lg num)
{
    if(num<2)
        return false;
    for (size_t i = 2; i < num; i++)
    {
        if(i%num==0)return false;
    }
    return true;
    
}


// https://lightoj.com/problem/intel-factor-factorization
// Time Complexity
// O(sqrt(n)
// void sieve() {
//     mark[0] = mark[1] = 1;
//     primes.push_back(2);
//     int lim = sqrt(mx * 1.0) + 2;
//     for (int i = 4; i < mx; i += 2) mark[i] = 1;
//     for (int i = 3; i < mx; i += 2) {
//         if (!mark[i]) {
//             primes.push_back(i);
//             if (i <= lim)
//                 for (int j = i * i; j < mx; j += i)
//                     mark[j] = 1;
//         }
//     }
// }




int main()
{
    FIO;
    lg brk, n,j,q, t, k,h,m,ah,am,a,b,tmp;
    lg i;
    cin >> t;
    lg ca=1;
    vector<lg>primes;
    for (size_t i = 2; i <= 100; i++)
    {
        if(isprime(i))primes.push_back(i);
    }
    
    while (t--)
    {
        lg cnt;
        cin>>n;
        vector<lg>val(101,0);
        for (size_t i = 2; i <= n; i++)
        {
            tmp =i;
            
            for (lg p:primes)
            {
                cnt=0;
                while(tmp%p==0)
                {
                    tmp/=p;
                    cnt++;
                }
                val[p]+=cnt;
            }
            
        }
        cout<<"Case "<<ca<<": "<<n<<" = ";
        bool flag =false;
        for(lg p:primes)
        {

            if(val[p])
            {
                if(flag)cout<<" * ";
                cout<<p<<" "<<"("<<val[p]<<")";
                flag=true;
            }

        }
        cout<<endl;
        ca++;
        
    
             
    }

    return 0;
}