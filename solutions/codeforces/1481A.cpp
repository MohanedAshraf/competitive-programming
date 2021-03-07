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
 int p1 , p2 ;
 cin>>p1>>p2;
 string s ;
 cin>>s;
 int r = 0 , u = 0 , l =0 , d=0 ; 
 for (int i = 0; i < s.size(); i++){
   if(s[i] == 'R')r++;
   if(s[i] == 'U')u++;
   if(s[i] == 'D')d++;
   if(s[i] == 'L')l++;
 }
 if(((p1 >= 0 && r>=p1 ) || (p1<=0 && abs(p1)<= l)) && ((p2 >= 0 && u>=p2 ) || (p2<=0 && abs(p2)<= d)))
 cout<<"yes"<<endl;
 else 
 cout<<"no"<<endl;

 
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