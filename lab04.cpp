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
    
    cout<<b<<endl;

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
    j=1;
    for ( i = 0; i < alen-3; i+=3)
    {
        if(b[i]=='U' and b[i+1]=='G' and b[i+2]=='G')
            cout<<"Codon "<<j++<<" UGG -> W"<<endl;
        else if(b[i]=='C' and b[i+1]=='C' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" CCC -> P"<<endl;
        else if(b[i]=='A' and b[i+1]=='A' and b[i+2]=='A')
            cout<<"Codon "<<j++<<" AAA -> K"<<endl;
        else if(b[i]=='U' and b[i+1]=='U' and b[i+2]=='U')
            cout<<"Codon "<<j++<<" UUU -> F"<<endl;
        else if(b[i]=='G' and b[i+1]=='C' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" GCC -> A"<<endl;
        else if(b[i]=='G' and b[i+1]=='G' and b[i+2]=='G')
            cout<<"Codon "<<j++<<" GGG -> G"<<endl;
        else if(b[i]=='G' and b[i+1]=='G' and b[i+2]=='A')
            cout<<"Codon "<<j++<<" GGA -> G"<<endl;
        else if(b[i]=='G' and b[i+1]=='G' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" GGC -> G"<<endl;
        else if(b[i]=='G' and b[i+1]=='G' and b[i+2]=='U')
            cout<<"Codon "<<j++<<" GGU -> G"<<endl;
        else if(b[i]=='G' and b[i+1]=='A' and b[i+2]=='G')
            cout<<"Codon "<<j++<<" GAG -> E"<<endl;
        else if(b[i]=='G' and b[i+1]=='A' and b[i+2]=='A')
            cout<<"Codon "<<j++<<" GAA -> E"<<endl;
        else if(b[i]=='G' and b[i+1]=='A' and b[i+2]=='U')
            cout<<"Codon "<<j++<<" GAU -> D"<<endl;
        else if(b[i]=='G' and b[i+1]=='A' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" GAC -> D"<<endl;
        else if(b[i]=='G' and b[i+1]=='C' and b[i+2]=='G')
            cout<<"Codon "<<j++<<" GCG -> A"<<endl;
        else if(b[i]=='G' and b[i+1]=='A' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" GAC -> D"<<endl;
        else if(b[i]=='A' and b[i+1]=='C' and b[i+2]=='C')
            cout<<"Codon "<<j++<<" ACC -> T"<<endl;
        
    }
    
       

    return 0;
} 