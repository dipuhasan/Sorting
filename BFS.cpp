#include<iostream>
#include<queue>
#include<vector>
using namespace std;

 queue<int>q;
 int ar[15][15];
 int dist[15];
 bool visited[15];

void BFS(int p,int s)
{
   int a,n,b,i,j;

   for(i=0;i<p;i++)
   {
       dist[i]=0;
       visited[i]=false;
   }

   q.push(s);
   visited[s]=true;
   dist[s]=0;
   while(!q.empty())
   {
       a=q.front();
       q.pop();
       for(i=s;i<p;i++)
       {
           for(j=0;j<p;j++){

           if(ar[i][j]==1)
           {
               if(visited[j]==false){
               b=dist[i];
               
               dist[j]=++b;
              
               visited[j]=true;
               q.push(j);
               }
           }
           }
       }
}
for(int l=0;l<p;l++)
   {
       cout<<dist[l]<<" ";
   }
   cout<<endl;
}

int main()
{
    int i,n,s,j,m,p;
    cin>>n;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    BFS(n,1);
    return 0;
}
