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


void solution(){

    // This is the main code
    int n,x;
    cin>>n>>x;
    int a[n+1];
    forn(i,0,n) cin>>a[i];
    int ans=0;
    forn(i,1,n){
        if(a[i]<a[i-1]){
            forn(j,0,i+1){
                if(a[j]>x){
                    int temp=x;
                    x=a[j];
                    a[j]=temp;
                    ans++;
                }
            }
            forn(j,1,i+1){
                // cout<<a[j]<<" ";
                if(a[j]<a[j-1]){
                    cout<<-1<<"\n";
                    return;
                }
            }

        }
    }
    cout<<ans<<endl;

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