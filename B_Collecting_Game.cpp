#include <bits/stdc++.h>
using namespace std;

#define lg long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 

// const lg N = LLONG_MAX;
// BIG LOOOOOOOOOL 10
// vector<lg> check_array(N);


int main() {
   Faster;
	lg t;
	cin>>t;
	
	while(t--)
	{
	    lg n;
	    cin>>n;
        
        vector<lg> v(n),ans(n,-1),pref_sum(n,-1);
        vector<pair<lg,lg>> p(n);
        for(lg i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i;
            // copy_v[i]=p[i].first;
        }
        sort(p.begin(),p.end());
        pref_sum[0]=p[0].first;
        for(int i=1;i<n;i++)
        {
            pref_sum[i]=pref_sum[i-1]+p[i].first;
        }

        stack<int> container;
        for(int i=0;i<n;i++)
        {
            container.push(p[i].second);
            if(i==n-1 or p[i+1].first>pref_sum[i]){
                while(!container.empty()){
                    ans[container.top()]=i;
                    container.pop();
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<pref_sum[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<p[i].first<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<p[i].second<<" ";
        // }
        // cout<<endl;cout<<endl;


    cout<<endl;
	    
}


}
