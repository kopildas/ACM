// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;




typedef long long lg;

const lg N = 1000; // BIG LOOOOOOOOOL 7
lg ar[N];

vector<lg> adz[N];
lg visited[N];
lg n,m;



bool chek(lg i)
{
    visited[i]=true;
    for (lg j = 0; j < adz[i].size(); j++)
    {
        lg child=adz[i][j];
        if(visited[child]) return true;
        if(chek(child)) return true;
    }
    visited[i]=false;
    return false;
}






bool is_DAG()
{
    for (lg i = 1; i <= n; i++)
    {
        if(!visited[i])
            if(chek(i)) return false;
    }
    return true;
    
}




int main()
{
    bool flag=true;
    lg u,v;
    cin>>n>>m;
    for (lg i = 0; i < m; i++)
    {
        cin>>u>>v;
        adz[u].push_back(v);
    }
    
    if(is_DAG())
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
} 