/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair 
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 103
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int ans[maxn],vis[maxn];
vector<int> graph[maxn];

void dfs(int node,int parent){
    vis[node]=1;
    if(ans[parent]==2) ans[node]=1;
    else ans[node]=2;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x,node);
    }
}
void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,maxn) graph[i].clear();
    forn(i,0,n-1){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    memset(ans,0,sizeof(ans));
    memset(vis,0,sizeof(vis));
    ans[0]=2;
    dfs(1,0);
    forn(i,1,n+1) cout<<ans[i]<<" ";
    cout<<endl;
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}