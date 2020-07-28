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

int parent[maxn],child[maxn],pre[maxn];

int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    forn(i,0,n+1){
        pre[i]=i;
        parent[i]=i;
        child[i]=-1;
    }   
    forn(i,0,n-1){
        cin>>u>>v;
        u=find(u);
        v=find(v);
        parent[v]=u;
        child[pre[u]]=v;
        pre[u]=pre[v];
    }
    // forn(i,1,n+1) cout<<parent[i]<<" "<<child[i]<<endl;
    for(int i=find(1);i!=-1;i=child[i]){
        cout<<i<<" ";
    }
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