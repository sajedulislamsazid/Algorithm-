#include<bits/stdc++.h>     
using namespace std;        

int find(int node)
{

   if(par[node] == -1)
    
        return node;  
       int leader = find(par[node]);       
       par[node] = leader;      
       return leader;  

}



int main()
{
   
    memset(par,-1,sizeof(par));  
    par[0] = -1;  
     par[1] = -1;  
     par[2] =  1;  
     par[3] =  5;  
     par[4] =  3;  

     cout << find(4) <<  endl;

    return 0;  
}