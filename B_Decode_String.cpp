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
    string s;
    cin>>t;
    while (t--)
    {
        lg s_len;
        cin>>s_len;
        cin>>s;
        vector<char>cha;
        for (size_t i = 0; i < s_len; i++)
        {
            if(s[i+2]=='0' and i+2<s_len and s[i+3]!='0')
            {
                ah=((s[i]-'0')*10)+(s[i+1]-'0');
                cha.push_back(ah+96);
                // cout<<"ah "<<ah+96<<" i "<<i<<endl;
                i+=2;
                
            }
            else
            {
                ah=(s[i]-'0');
                cha.push_back(ah+96);
                // cout<<"ah "<<ah+96<<" i "<<i<<endl;
            }
        }
        s_len=cha.size();
        for (size_t i = 0; i < s_len; i++)
        {
            cout<<cha[i];
        }
        cout<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
}