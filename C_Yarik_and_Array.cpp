#include <bits/stdc++.h>
using namespace std;


// typedef long long lg;
 
// const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg check_array[N];


int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
        
        vector<int> v(n);
        cin>>v[0];
        int par=abs(v[0])%2;
        int sum = v[0];
        int max_sum = v[0];

        for(int i=1; i<n; i++)
        {
            cin >> v[i];

            if(abs(v[i])%2 !=par){
                sum=sum+v[i];
                // max_sum=max(max_sum,sum);
                // cout<< "i = "<<i<<" max = "<<max_sum<<" sum = "<<sum<<endl;
            }
            else
            {
                sum = v[i];
                // max_sum=max(max_sum,sum);
                // cout<< "i = "<<i<<" max = "<<max_sum<<" sum = "<<sum<<endl;
                // max_sum = v[i];
            }
            if(v[i]>sum)
            {
                sum=v[i];
            }
            par=abs(v[i])%2;
            max_sum=max(max_sum,sum);
        }


        cout<<max_sum<<endl;
	    
}


}
