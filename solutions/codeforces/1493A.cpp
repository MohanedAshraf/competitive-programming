#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
#define MOD 1000000007
#define EPS 1e-9
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define foreach(it,x) for(__typeof__((x).begin()) it = (x).begin(); it != (x).end(); ++it)
 
void solve(){
  int n , k; 
  cin>>n>>k;
  vector<int> v ;
  int m = k&1? (k/2 + 1) : k/2;
  for(int i  = m  ; i<=n ; i++){
    if(i ==k)continue;
      v.push_back(i);
  }
 
  cout<<v.size()<<endl;
  for(auto i : v)cout<<i<<" ";
  cout<<endl;
 
}
 
 
 
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t ;
    cin >> t ;
    while(t--){
        solve();
    }
 
 return 0;
}