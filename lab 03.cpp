// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
   

    lg brk, n,i,j, t, k,h,m,ah,am,c,x;
    string a,b;
    cin>>a;
    b=a;
    lg alen=a.length();
    lg simi=0;
    j=0;
    for (i = alen-1; i > -1 ;i--,j++)
    {
        if(a[i]=='T')
            b[j]='A';
        else if(a[i]=='A')
            b[j]='T';
        else if(a[i]=='C')
            b[j]='G';
        else if(a[i]=='G')
            b[j]='C';
        
        
    }
    
    cout<<b<<endl;`

    for ( i = 0; i < alen; i++)
    {
        if(b[i]=='A')
            b[i]='U';
        else if(b[i]=='T')
            b[i]='A';
        else if(b[i]=='C')
            b[i]='G';
        else if(b[i]=='G')
            b[i]='C';
        
    }
    cout<<b<<endl;
    

       

    return 0;
} 