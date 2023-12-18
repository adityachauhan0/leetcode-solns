#include <bits/stdc++.h>
typedef int ll;
#define vi vector<ll>
#define vp vector< pair <ll,ll> >
#define f first
#define s second

#define pb push_back
#define endl '\n'

using namespace std;

void dfs(ll node, vi &visited, vi &ans, vi adj[]){
    visited[node] = 1;
    ans.pb(node);
    for (auto i: adj[node]){
        if (!visited[i]){
            dfs(i,visited,ans,adj);
        }
    }

}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vi visited(V);
        vi ans;
        ll start = 0;
        visited[start] = 1;
        ans.pb(start);
        for (auto i: adj[start]){
            ll node = i;
            if (!visited[node]){
                dfs(node,  visited,  ans,  adj);
            }
            
        }
        return ans;

    }

void solve()
{
    
}
// Function to return Breadth First Traversal of given graph.
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        ll n = V;
        vi visited(n);
        queue<ll> q;
        q.push(0);
        vi bfs = {};
        visited[0] = 1;
        while (!q.empty()){
                ll node = q.front();
                q.pop();
                bfs.pb(node);
                for (auto i : adj[node]){
                    if (!visited[i]){
                        q.push(i);
                        visited[i] = 1;
                    }
                }
        }
        return bfs;     
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}