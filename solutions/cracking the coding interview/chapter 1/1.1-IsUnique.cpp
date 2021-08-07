#include<bits/stdc++.h>

using namespace std;

bool isunique (string s)
{
    // space O(1) time O(n log n)
    sort(s.begin() , s.end());

    for(int i =0 ; i < s.size() -1 ; i++ )
        if(s[i] == s[i+1]) return false;


    return true ;
}

bool WithExtraSpace (string s)
{
    // space O(x) time O(min(c , s))
    bool x[128] ={0};

    for(int i =0 ; i < s.size() ; i++ ){
        if(x[s[i]]) return false;
        x[s[i]] = true;
    }

    return true ;
}

int main()
{
    string  s;
    cin>>s;

   cout <<  isunique(s) <<endl;
   cout <<  WithExtraSpace(s) << endl;



    return 0;
}
