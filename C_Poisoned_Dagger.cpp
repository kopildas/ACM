#include <bits/stdc++.h>
using namespace std;


typedef long long lg;
 
// const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg check_array[N];


int main() {
	lg t;
	cin>>t;
	
	while(t--)
	{
	    lg n,h;
	    cin>>n>>h;
        
        vector<lg> v(n);
        for(lg i=0;i<n;i++)cin>>v[i];
        lg divider,k=0,damage=0,fact=n,target=h;
        lg ans=0,l=1,r=h;
        lg max_sum = 0;

        while(l<=r){
            lg mid= (l+r)/2;
            damage=0;
            for(lg i=0; i<n; i++){
                if(i==n-1)damage+=mid;
                else
                {
                    divider=v[i+1]-v[i];
                    if(divider>=mid)damage+=mid;
                    else damage+=divider;
                }
            }
            if(damage>=h){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }

        

    cout<<ans<<endl;
	    
}


}
