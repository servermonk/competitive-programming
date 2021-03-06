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
int vis[maxn];

void dfs(int node,int parent){
    vis[node]=1;
    for(auto child: graph[node]){
        if(!vis[child]) dfs(child,node);
       
    }

}

void solution(){

    // This is the main code
    int n,u;
    cin>>n;
    int a[n+1];
    forn(i,2,n+1){
        cin>>u;
        graph[i].pb(u);
        graph[u].pb(i);
    }
    forn(i,1,n+1) cin>>a[i];
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}