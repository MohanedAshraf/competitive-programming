#include<bits/stdc++.h>

using namespace std;



bool oneAway(string a , string b)
{
  // space O(1) , Time O(n)  
  if(a.size() == b.size()){
        bool flg = 0 ;
    for(int i = 0 ; i< a.size() ; i++){
        if(a[i] != b[i]){
            if(flg) return false;
            flg = 1;
        }
    }
    return true ;
  }
  else {
    bool flg = 1 ;
    if(a.size() >  b.size()) flg =1;
    int i=0 , j=0;

    while(i < a.size() && j < b.size()){
        if(a[i] !=  b[j]){
            if(i != j) return false ;
            flg ? i++ : j++ ;
        }
        else{
            i++;
            j++;
        }
    }

    return true;

  }

  return true;



}




int main()
{
    int n;
    string a , b;
    cin>>a>>b;


   cout <<oneAway(a  , b) <<endl;



    return 0;
}
