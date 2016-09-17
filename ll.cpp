#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//linked list(ll) representation of a graph

vector<vector<ll> >g(100010);           //vector within vector 
int main()
{
     ll nodes,edges,e1,e2;
     
     cin>>nodes;
     cin>>edges;
     
     for(ll i=0;i<edges;i++)
       {
           cin>>e1>>e2;
           g[e1].push_back(e2);
           //uncomment this for undirected graph
          // g[e2].push_back(e1); 
           
       }
    
     //now that you've made ll , now its time to display it
     
     for(ll i=1;i<=nodes;i++)
       {
           cout<<i<<" : ";
           for(ll j=0;j<g[i].size();j++)
              {
                  cout<<g[i][j]<<"  ";
              }
              cout<<endl;
       }
    
    return 0;
}


/*

I/P :

4 5
1 2
2 3
3 4 
1 4
3 1

O/P

1 : 2  4  
2 : 3  
3 : 4  1  
4 : 

*/

