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
	    int t,k;
	    cin>>t>>k;
        string str;
        cin>>str;
        int cnt=0;
        int ans=0;
        for(int i=0; i<k; i++) {
            if(str[i]=='W')cnt++;
        }
        ans=cnt;
        for(int i=k;i<t;i++)
        {
            if(str[i]=='W')cnt++;
            if(str[i-k]=='W')cnt--;
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
	    
}


}
