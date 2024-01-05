#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}


// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int d = 1; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lg brk, n,j,q, t, k,h,m,ah,am,a,b,tmp;
    lg i;
    cin >> t;
    lg ca=1;
    while (t--)
    {

        lg n,q,v,e;
        cin>>n;
        q=n;
        string s;
        cin>>s;
        vector<int> adj[n];
        while (q--)
        {
            cin>>v>>e;
            addEdge(adj, v, e);
        }
        
    printGraph(adj, n);

        //     cout<<"Case "<<ca<<": "<<"Fight"<<endl;
        // ca++;
    
             
    }

    return 0;
}