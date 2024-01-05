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

    int brk, n,j, t, k,h,m,ah,am,a,b,c,count;
    string s,p;
    cin>>s>>p;
    
    int psum=0;
    for (int i = 0; i < s.size(); i++)
    {
        psum+=(s[i]-'0');
        ah+=(p[i]-'0');
    }
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<psum<<" "<<ah ;
    for (int i = 0; i < s.size()-p.size(); i++)
    {
        for (int j = i,k=0; k < p.size();k++, j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    
    
    
    
        
       

    return 0;
}