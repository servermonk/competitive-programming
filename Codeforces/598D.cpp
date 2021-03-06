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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 1004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

char  c[maxn][maxn]={};
int vis[maxn][maxn]={};
int ans[100004]={};
int n,m,k,i,x,y,cnt;

void dfs(int x,int y){
    if(x<1 || x>n || y<1 || y>m) return;
    if(c[x][y]=='*'){
        cnt++;
        return;
    }
    if(vis[x][y]!=0) return;
    vis[x][y]=i;
    dfs(x-1,y);
    dfs(x+1,y);
    dfs(x,y-1);
    dfs(x,y+1);
    return;
}

void solution(){

    // This is the main code
    cin>>n>>m>>k;
    for(i=1;i<=n;i++){
        forn(j,1,m+1) cin>>c[i][j];
    }
    for(i=1;i<=k;i++){
        cin>>x>>y;
        cnt=0;
        if(!vis[x][y]){
            dfs(x,y);
            ans[i]=cnt;
        } 
        else cnt=ans[vis[x][y]];
        cout<<cnt<<endl;
    }

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