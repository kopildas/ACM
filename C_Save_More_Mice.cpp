#include <bits/stdc++.h>
using namespace std;

#define lg long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main() {
   Faster;
	lg t,num;
	cin>>t;
    
    while(t--){
        lg n,m;           cin>>n>>m;
        vector<lg>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        lg ans=0,dist,prev_dist=-1;

        for(int i=0;i<m;i++){
            dist=n-v[i];
            dist=(dist*(dist+1))/2;
            if(prev_dist != dist){
                if(dist<n)ans++;
                else break;
            }
            prev_dist=dist;
        }
        cout<<ans<<endl;
  
    
    }

	    
}