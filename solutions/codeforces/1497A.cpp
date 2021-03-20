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
 int n ;
 cin>>n;
 int a[n+1];
 for(int i = 0 ; i< n ; i++)
   cin>>a[i];
  sort(a, a + n);
  vector<int> v ;
  for(int i = 0 ; i< n-1 ; i++){
    if(a[i] == a[i+1]){
      v.push_back(a[i]);
      continue;
    }
    cout<<a[i]<<" ";
  }
  cout<<a[n-1]<<" ";
  

  for(int i = 0; i< v.size() ; i++)
    cout<<v[i]<< " ";  
  

 
 
}
 
 
 
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t ;
    cin >> t ;
    while(t--){
        solve();
        cout<<endl;
    }
 
 return 0;
}