#include <bits/stdc++.h>
using namespace std;

#define lg long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 

// const lg N = LLONG_MAX;
// BIG LOOOOOOOOOL 10
// vector<lg> check_array(N);


int main() {
   Faster;
	lg t,num;
	cin>>t;
    vector<lg>cards;
    cards.push_back(0);
    cards.push_back(2);
    for (int i=2; i<=1000000;i++){
        cards.push_back(cards[i-1]+(i-1)+(i*2));
    }
    for (int i=0; i<=100;i++){
        cout<<cards[i]<<" ";
    }
    while(t--){
        lg n;           cin>>n;
        lg sum=0;
        while(n>0){
            
        }

    }
  
    


    cout<<endl;
	    
}