#include<bits/stdc++.h>     
using namespace std;
vector<int>  adj_list[1005];        
bool vis[1005];     
int level[1005];        
void bfs(int src)
{
      queue<int> q; 
      q.push(src);
      
      while (!q.empty())
      {
            int par = q.front();
            q.pop();   
             q.pop();  
              cout << par  << " " ;  

              for(int child :  adj_list[par])
              {
                    if(vis[child] == false)
                    {
                          q.push(child); 
                          vis[child] = true;

                           

                    }     
     }
      

    }   


    int main()  
    {
         int ,e;  
         cin  >> n >> e;        
         while(e--)
         {
                int a,b;  
                cin  >> a >> b;    
                adj_list[a].push_back(b);           
                adj_list[b].push_back(a); 
         }
         
         memset(vis, false, sizeof(vis));           
         memset(level,-1,sizeof(level));
         memset(level, -1, sizeof(level));  
         int src,dst;   
         cin  >> src  >> dst;  
         bfs[src];  

         vector<int> path;
         int node  * src;  
         while(node != -1)
         {
                path.push_back(node);       
                cout << node << " ";  
                node = parent[node];    
         }

            reverse(path.begin(), path.end());          
            for(int node : path)
            {
                     cout << node << " ";  
            }
                         




    }