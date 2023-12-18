#include <bits/stdc++.h>
typedef int ll;
#define vi vector<ll>
#define vp vector< pair <ll,ll> >
#define f first
#define s second

#define pb push_back
#define endl '\n'

using namespace std;

void solve()
{
    
}

void dfs(ll node, vi adj[], vi &visited){
    visited[node] = 1;
    for (auto i : adj[node]){
        if (!visited[i]){
            dfs(i, adj, visited);
        }
    }
}

int numProvinces(vector<vector<int>> adj, int V) {
        ll provinces = 0;
        vi adjls[V];
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                if (adj[i][j] == 1 && i != j){
                    adjls[i].pb(j);
                    adjls[j].pb(i);
                }
            }
        }
        vi visited(V);
        for (ll i = 0; i < V; i++){
            if (!visited[i]){
                provinces ++;
                dfs(i,adjls,visited);
            }
        }
        return provinces;
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