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
	    lg n,p,l,t,total_poi,mid,ans;
	    cin>>n>>p>>l>>t;
        lg week= (n+6)/7;
       lg low=1,high=n;

       while(low<high){
        mid= (low+high)/2;
        ans= min(week,mid*2)*t;
        ans+= (l*mid);

        if(ans>=p)
            {
                high=mid;
            }
        else low=mid+1;
       }
        
    cout<<n-high;   
    


    cout<<endl;
	    
}


}
