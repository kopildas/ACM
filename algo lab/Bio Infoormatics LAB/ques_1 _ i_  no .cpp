


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // parse the input
  
  // output the result


string a;
cin>>a;

int count= a.size(),i,j,cnt=0;
for (i = 0; i < count; i++)
{
    if(a[i]==b[0]){
        for (j = 1,i++; j < b.size(); j++,i++)
        {
            if(a[i]!=b[j])break;
        }
        if(j==b.size())
           cnt++;

        
    }
}




  
  cout<<cnt<<endl;

  return 0;
}
