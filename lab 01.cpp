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
   

    lg brk, n,i,j, t, k,h,m,ah,am,c,x;
    string a,b;
    cin>>a>>b;
    cin>>n;
    lg alen=a.size();
    lg blen=b.length();
    lg mutation=0;
    for (size_t i = 0; i < alen ;i++)
    {
        if(a[i]!=b[i])
            mutation++;
    }
    if(mutation>n)
        cout<<"Hazardous"<<endl;
    else if(mutation==n)
        cout<<"Alarming"<<endl;
    else if(mutation<n)
        cout<<"No problem"<<endl;
    else if(mutation==0)
        cout<<"Not perform"<<endl;

       

    return 0;
} 