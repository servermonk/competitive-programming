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
#define maxn 204
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;
int dp[maxn];

int func(int n,int k){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]==0){
        ll res=0;
        forn(i,1,k+1){
            if(n>=i) res+=func(n-i,k);
        }
        dp[n]=res%Mod;
        return res%Mod;
    }
    return dp[n]%Mod;
}


void solution(){

    // This is the main code
    int n,k,d;
    cin>>n>>k>>d;
    int ans1=func(n,k);
    memset(dp,0,sizeof(dp));
    int ans2=func(n,d-1);
    cout<<((ans1-ans2)+Mod)%Mod;
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