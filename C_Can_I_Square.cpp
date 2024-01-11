#include <bits/stdc++.h>
using namespace std;

#define lg long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main() {
   Faster;
	lg t,num;
	cin>>t;
    
    while(t--){
        lg n,sum=0;           cin>>n;
        vector<lg>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        lg l=0,r=1e9;
        bool flag=false;

        while(l<=r){
            lg mid=(l+r)/2;
            if(mid*mid==sum){
                flag=true;
                break;
            }else if(mid*mid>sum){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
  
    
    }

	    
}