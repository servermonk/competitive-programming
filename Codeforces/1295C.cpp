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
    string s,p;
    cin>>s>>p;
    int a=1,i=0,j=0;
    vector<vector<int>> v(26);
    for(auto c: s) v[c-'a'].pb(i++);
    for(auto c:p){
        auto &x=v[c-'a'];
        auto it=lb(all(x),j);
        // cout<<j<<" "<<*it<<" "<<*x.end()<<endl;
        if(it==x.end()){
            a++;
            it =lb(all(x),0);
            if(it==x.end()) {a=-1;break;}
        }
        j=*it+1;
    }
    cout<<a<<endl;

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