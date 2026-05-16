#include<bits/stdc++.h>  
using namespace std;    
int main()
{

   int n,e;  
   cin >> n >> e;  
   int adj_mat[n][n];  
   for(int i=0;i<n;i++)
   {
       for(int j = 0; j<n; j++)
       {
           if(i==j)
               adj_mat[i][j] = 0;
           else    
           adj_mat[i][j] = 0;
       }
   }            

   for(int i = 0; i<e; i++)
   {
       int u,v; 
       cin >> u  >> v;  
       adj_mat[u][v] = 1;
    
   }

   for(int i = 0; i<n; i++)
   {
      for(int j  =0; j<n; j++)
      {
        cout << adj_mat[i][j] << " ";       
      }
        cout << endl;   
        
   }


   return  0;  

}