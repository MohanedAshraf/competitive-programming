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
  ll  p , a , b  , c;
  cin>>p>>a >>b>> c ;
  
  if((p%a==0&&p>=a) || (p%b==0&&p>=b) || (p%c==0&&p>=c) )cout<<0<<endl;
  else {
    a=a-(p%a); b=b-(p%b); c=c-(p%c);
    cout<<min(a , min(b , c))<<endl;
  }
  
 
 
  
    
 
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