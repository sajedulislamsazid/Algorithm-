#include<bits/stdc++.h> 
using namespace std;        
int  main()
{
    int n,e; 
    cin >> n >> e;  
    int a[n];
    vector<int> adj_list[n];    
   while(e--)
   {
     int u,v;  
     cin >> u >> v;  
     adj_list[u].push_back(v);        

   }

   for(int i=0;i<n;i++)
   {
     cout << i << " -> ";
     for(int x : adj_list[i])   
     
        cout << x << " ";       
        cout << endl;           

   }

    return  0; 
}

