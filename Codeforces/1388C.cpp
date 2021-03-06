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
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[maxn];
ll vis[maxn]; 
ll p[maxn],h[maxn],happy,happy_sum[maxn],total_vis[maxn];
int n,m,u,v,flag;
void dfs(int node,int parent){
    vis[node]=1;
    for(auto child: graph[node]){
        if(!vis[child]){
            dfs(child,node);
        }
    }
    total_vis[node]+=p[node];
    total_vis[parent]+=total_vis[node];
    happy=(total_vis[node]+h[node])/2;
    if((total_vis[node]+h[node])%2) flag=1;
    happy_sum[parent]+=happy;
    if(happy<happy_sum[node]) flag=1;
    if(happy>total_vis[node] || happy<0) flag=1;
}

void solution(){

    // This is the main code
    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    memset(happy_sum,0,sizeof(happy_sum));
    memset(total_vis,0,sizeof(total_vis));
    forn(i,1,n+1) graph[i].clear();
    forn(i,1,n+1) cin>>p[i];
    forn(i,1,n+1) cin>>h[i];
    forn(i,0,n-1){
        cin>>u>>v;
        graph[v].pb(u);
        graph[u].pb(v);
    }
    flag=0;
    dfs(1,0);
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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