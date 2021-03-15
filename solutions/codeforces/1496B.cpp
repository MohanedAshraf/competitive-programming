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
 int n , k ;
 cin>>n>>k ;
 vector<int> v;
 int a , mn=-1 ;
 for (int i =  0; i < n; i++) {
   cin>>a;
   v.push_back(a);
}
if(!k){
  cout<<n<<endl;
  return;
}
 
sort(v.begin() , v.end());
if(n==1 &&v[0]!=0)mn=0;
 for (int i =  0; i < n-1; i++) {
   if(v[0]!=0){
     mn=0;
     break;
   }
   if(v[i+1] - v[i] > 1){
     mn=v[i]+1;
     break;
   }
 }
 
if(mn==-1){
  cout<<n+k<<endl;
  return;
}
vector<int>::iterator it ;
it = find(v.begin() , v.end()  , (v[n-1]+mn+1)/2);
 
if(it != v.end())cout<<n<<endl;
else cout<<n+1<<endl;
 
 
 
 
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