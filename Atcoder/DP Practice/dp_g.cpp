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
int ans[maxn],vis[maxn]={0};

void dfs(int node,int parent,int depth){
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x,node,depth+1);
        ans[node]=max(ans[node],1+ans[x]);
        // cout<<node<<" "<<x <<" "<<ans[node]<<endl;
    }
    
    // cout<<node<<" "<<depth<<endl;
}

void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n>>m;
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
    }
    forn(i,1,n+1){
        if(vis[i]==0) dfs(i,0,0);
    }
    int a=0;
    forn(i,1,n+1) a=max(a,ans[i]);
    std:: cout<<a; 
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}