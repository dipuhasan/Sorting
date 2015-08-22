#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

vector<int>g[15];
bool visit[15];
bool ans=false;

void DFS(int s,int n)
{
    visit[s]=true;
    for(int i=0;i<g[s].size();i++)
    {
        if(visit[g[s][i]]==false)
        {
            if(g[s][i]==n)
            {
                ans=true;
            }
            visit[g[s][i]]=true;
            DFS(g[s][i],n);
        }
    }
    visit[s]=true;
}

int main()
{
    int n,s,u,v;
    
    for(int j=1;j<=12;j++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    while(cin>>s>>n)
    {
        for(int i=0;i<8;i++)
    {
        visit[i]=false;
    }
        for(int i=s;i<11;i++){
                if(visit[i]==false){
        DFS(s,n);
        }
    }
    if(ans==true)
        {
            cout<<"YES"<<endl;
            ans=false;
        }
        else
            cout<<"NO"<<endl;
        }
return 0;
}
