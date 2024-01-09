#include <bits/stdc++.h>
using namespace std;


// typedef long long lg;
 
// const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg check_array[N];


int main() {
	int n;
	
	cin>>n;
	
	while(n--)
	{
	    int t;
	    cin>>t;
	    vector<int>candy(t);
	    
	    for (int i = 0; i < t; i++) {
	        cin>>candy[i];
	    }
	    
	    int l=0,ans=0;
	    int r=t-1;
	    int bob=0;
	    int alic=0;
	   
	    int bob_count=0;
	    int alic_count=0;
	    

	   
       
	    while(l<=r){
            if(bob<=alic){
                bob+=candy[l++];
                bob_count++;
            }
            else{
                alic+=candy[r--];
                alic_count++;
            }
            if(alic==bob){
                ans=alic_count+bob_count;
            }
            // cout<<l<<" bob "<<bob<<endl;
            // cout<<r<<" alic "<<alic<<endl<<endl;    
        }
        cout<<ans<<endl;
	    
}



	
	
	


}
